
#include <windows.h>
#include <tchar.h>
#include <stdlib.h> 
#include <stdio.h>


typedef unsigned char   uint8;
typedef unsigned short  uint16;
typedef unsigned long   uint32;
typedef long int 		uint64;
typedef long long int  	int64;
typedef signed char    	int8;
typedef signed short   	int16;
typedef signed long    	int32;

typedef struct
{
	uint8 rspType;
	uint8 r[2];
	uint8 a[6];
	uint8 aa[12];
	uint8 tt[8];
	uint8 t[6];
	uint8 s[6];
	uint8 p[12];
	uint8 DateTime[12];
	uint8 i[39 + 1 /*40*/]; // KB 1401-06-01
	uint8 c[20];
	uint8 ss[8];
	uint8 Opt1[40];
	uint8 Opt2[40];
}pcpMsg92PecST;

typedef struct
{
	pcpMsg92PecST pcpmsgresp;
	uint8 cardpan[20];
}lastTransST;

uint8 transWrite(lastTransST* lasttrans, uint8* filename);
uint8 transRead(uint8* filename, lastTransST* records);

int main()
{
	int i;
	lastTransST *lasttrans = malloc(sizeof(lastTransST));
	lastTransST records[5] = {""};
	uint8 filename[] = {"LSTPCPTXN"};  /* dedicated binary file's name */

	// random data for test
	/* uncomment for test */
	/* test write 5 transactions*/

	for (i = 1; i <= 200; ++i)           
	{
		sprintf(lasttrans->cardpan, "test_%d", i);
		transWrite(lasttrans, filename);
	}
	
	for (i = 1; i <= 7; ++i)           
	{
		sprintf(lasttrans->cardpan, "TEST_%d", i);
		transWrite(lasttrans, filename);
	}
	
	/* read all 5 at once,
	NOTE: amounts of read data can be dynamically allocated */
	transRead(filename, records);

	puts(records[0].cardpan);
	puts(records[1].cardpan);
	puts(records[2].cardpan);
	puts(records[3].cardpan);
	puts(records[4].cardpan);

	return 0;
}
/*
 ============================================================================
 Name        : transwrite
 Author      :
 Version     :
 Copyright   :
 Description : Serializes struct data (type LasttransST) in to a binary file. 
 ============================================================================
 */
uint8 transWrite(lastTransST* lasttrans, uint8* filename)
{
	typedef struct {
		lastTransST transaction;
		uint8 index_number;
	}Data;
	FILE* fp; 
	uint8 i = 0;                           /* iterator */
	uint8 current_loc = 0;             /* current buffer location indicator */
	uint8 initial_recordsnumber = 0;   /* amounts of initial values already exist in file */
	Data onetrans_data = {NULL};       /* Data consists of a transaction and it's corresponding index number */
	Data current_data[5] = { "" };     /* current values exist in file */

	
	fp = fopen(filename, "rb");
	if (fp == NULL)
	{
		fp = fopen(filename, "a");
		if (fp == NULL)
		{
			printf(" Error, file failed to create.");
			exit(EXIT_FAILURE);
		}
	}

	initial_recordsnumber = fread(&current_data, sizeof(Data), 5, fp); /*determines how many records already exits*/
	fclose(fp);

	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		printf(" Error, file failed to create.");
		exit(EXIT_FAILURE);
	}
	if (initial_recordsnumber < 5)
	{
		onetrans_data.transaction = *lasttrans;
		onetrans_data.index_number = initial_recordsnumber + 1;
		fwrite(&onetrans_data, sizeof(Data), 1, fp);
		fclose(fp);
		return 0;
	}
	for (i = 0; i < 5; i++)
	{
		if (current_data[i].index_number < current_data[current_loc].index_number)
			/* if above detects oldest index number */
			current_loc = i;
	}
	onetrans_data.transaction = *lasttrans;
	onetrans_data.index_number++;

	fclose(fp);
	fp = fopen(filename, "w");
	fseek(fp, 0, SEEK_SET);
	//rewind(fp);
	fwrite(&onetrans_data, sizeof(Data), 1 , fp);
	fclose(fp);

	return 0;
}

/*
============================================================================
Name        : transread
Author      : 
Version     :
Copyright   :
Description : Reads serialized data from binary file.
============================================================================
*/
uint8 transRead(uint8* filename, lastTransST* records)
{
	uint8 i;
	uint8 current_loc = 0;
	typedef struct {
		lastTransST transaction;
		uint8 index_number;
	}Data;
	Data transdata[5] = {""};


	FILE* fp = fopen(filename, "rb");
	if (fp != NULL) {
		fseek(fp, -5 * sizeof(Data) , SEEK_END);
		fread(&transdata, sizeof(Data), 5, fp); /* reads all 5 */
		for(i = 0; i < 5; i++)
			records[i] = transdata[i].transaction;
		fclose(fp);
	}
	return 0;

}