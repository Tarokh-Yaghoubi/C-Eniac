#include <stdio.h>

				    
				/*
				 _     ___ _   _ _   ___  __
				| |   |_ _| \ | | | | \ \/ /
				| |    | ||  \| | | | |\  /
				| |___ | || |\  | |_| |/  \
				|_____|___|_| \_|\___//_/\_\


				 Linux is the reason software is still alive !
				|WWWWWWWWWWWWWWWWWWWx,.   .;OWWWWWWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWWWXc          .dWWWWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWWX.             :WWWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWW;               kWWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWW..od.  .xXKo    ;WWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWW.xo;N  0O.'Wc   .WWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWW';c.::l;:..K.   .WWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWW'.ckkkkkkxll.   .WWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWN .'clllllcc,     kWWWWWWWWWWWW|
				|WWWWWWWWWWWWWN'    .::,..;d.     xWWWWWWWWWWW|
				|WWWWWWWWWWWWK.   xW0xxOXMMMX      ,KWWWWWWWWW|
				|WWWWWWWWWWNl    ;MMMMMMMMMMMO       lNWWWWWWW|
				|WWWWWWWWWK. .  .WMMMMMMMMMMMMx   .   .0WWWWWW|
				|WWWWWWWWx  '  .NMMMMMMMMMMMMMMd   .    kWWWWW|
				|WWWWWWWd      XMMMMMMMMMMMMMMMMc        0WWWW|
				|WWWWWWO      OMMMMMMMMMMMMMMMMMM'       .WWWW|
				|WWWWWW.     'MMMMMMMMMMMMMMMMMMMO        0WWW|
				|WWWWWW      OMMMMMMMMMMMMMMMMMN;         KWWW|
				|WWWWWd ''   .lKMMMMMMMMMMMMMMO           KWWW|
				|WXkl.,kOOO'    .kMMMMMMMMMMMM. ;x.  .'ldl xWW|
				|o.:dOOOOOOO:     ;MMMMMMMMMMK  oOOOOOOOOOc.NW|
				|,'OOOOOOOOOOo     XMMMMMMMMMl  OOOOOOOOOOOc.k|
				|c.OOOOOOOOOOOk,  ;XMMMMMMWKo  ;OOOOOOOOOOOk, |
				| :OOOOOOOOOOOOOo    .''..     kOOOOOOOOd;',lX|
				|l.',;:lokOOOOOOO'    ....    .OOOOOOk:.c0WWWW|
				|WWWNK0kd:,',::;.,0NWWWWWWWWWK.,dxdl'.oNWWWWWW|
				|WWWWWWWWWWNOdoxNWWWWWWWWWWWWWWl.  ,kWWWWWWWWW| */


int main()
{
	/* array with 5 rows and 2 columns */

	int arr[5][2] = {
		
		{0, 1},
		{2, 3},
		{4, 5},
		{6, 7},
		{8, 9}
	};

	int i, j;

	for (i = 0; i < 5; i++)
		for (j = 0; j < 2; j++)
			printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);


	return 0;

}