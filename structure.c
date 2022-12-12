#include <stdio.h>
#include <string.h>

struct Books {
	char title[60];
	char author[70];
	char subject[100];

	int book_id;

} book;

/* we use member access operator to access an structure */


int main()
{

	struct Books Book1; /* declaring Book1 of Type Book */
	struct Books Book2; /* declaring Book2 of Type Book */

	/* book 1 specification */

	strcpy(Book1.title, "Harry Potter");
	strcpy(Book1.author, "JK Rowling");
	strcpy(Book1.subject, "Novel Series");

	Book1.book_id = 112233;

	/* Book 2 specification */

	strcpy(Book2.title, "Subtle art of not giving a fuck");
	strcpy(Book2.author, "I dont remember");
	strcpy(Book2.subject, "How to not give a fuck in life");

	Book2.book_id = 445566;


		
	/* Print Book1 Information */

	printf("Book 1 Title : %s\n", Book1.title);
	printf("Book 1 Author : %s\n", Book1.author);
	printf("Book 1 Subject : %s\n", Book1.subject);
	printf("Book 1 ID : %d\n", Book1.book_id);

	printf("----------------SECOND BOOK INFO--------------\n");
	printf("Book 2 Title : %s\n", Book2.title);
	printf("Book 2 Author : %s\n", Book2.author); 
	printf("Book 2 subject : %s\n", Book2.subject); 
	
	printf("Book 2 ID : %d\n", Book2.book_id);
	

	return 0;
	
}