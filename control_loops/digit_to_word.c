#include<stdio.h>
#include<string.h>
int main(void)
{
	int count=0;
	char Sstr[50];
	printf("Enter the number :");
	fgets(Sstr,50,stdin);
     do
	{
		switch(Sstr[count])//get last digit and print the word using case statement
		{
			case '0':
				printf("Zero ");
				break;
			case'1':
				printf("One ");
				break;
			case'2':
				printf("Two ");
				break;
			case '3':
				printf("Three ");
				break;
			case '4':
				printf("Four ");
				break;
			case '5':
				printf("Five ");
				break;
			case '6':
				printf("Six ");
				break;
			case '7':
				printf("Seven ");
				break;
			case '8':
				printf("Eight ");
				break;
			case '9':
				printf("Nine ");
				break;
		}
	}while(Sstr[count++]!='\0');
	
	printf("\n");

return 0;
}

