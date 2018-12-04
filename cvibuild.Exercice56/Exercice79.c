#include "my_header.h"
#include "stdio.h"


void main(void)

{
	unsigned int age = 0;
	char prenom[100];
	char phrase[100];
	
	printf("tapez le prenom");  
	scanf("%s", prenom);
	
	printf("tapez age"); 
	scanf("%d", &age);
	
	sprintf(phrase," je m'appelle %s et j'ai %d ans", prenom, age );
	 
	printf("%s", phrase);
	
	
	
	
	
	
	getchar();
	
}
