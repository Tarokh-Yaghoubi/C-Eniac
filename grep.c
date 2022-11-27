#include <stdio.h>
/**/
#define MAXLINE 1000 /* max input line length */

int getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould"; /* pattern to search for */

/* find all lines matching pattern */

int main()
{
	char line[MAXLINE];
	int found = 0;

	while (getline(line, MAXLINE) > 0)
		if (strindex(line, pattern) >= 0)
		{
			printf("%s", line);
			found++;
		}

	return found;
}

/* getline : getline into s , return length */

int getline(char line[], int max)
{
	int c, i;

	i = 0;
	while (--max > 0 && (c = getchar()) != EOF && c != '\n')
		line[i++] = c;

	if (c == '\n')
		line[i++] = c;

	line[i] = '\0';
	return i;
}


/* strindex : return index of t in s , -1 if none */
int strindex(char source[], char searchfor[])
{
	int i, j, k;

	for (i = 0; source[i] != '\0'; i++) {
		for (j = i, k = 0; searchfor[k] != '\0' && source[j] == searchfor[k]; j++, k++)
			;

		if (k > 0 && searchfor[k] == '\0')
			return i;
	}

	return -1;

}
