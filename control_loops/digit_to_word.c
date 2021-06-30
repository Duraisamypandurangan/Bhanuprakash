#include<stdio.h>
int main(void)
{
	int num,rem,rev=0;
	printf("Enter the number :");
	scanf("%d",&num);//read input
	while(num > 0)//first find revers of number
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num/=10;
	}
	while(rev > 0)
	{
		switch( rev % 10)//get last digit and print the word using case statement
		{
			case 0:
				printf("Zero ");
				break;
			case 1:
				printf("One ");
				break;
			case 2:
				printf("Two ");
				break;
			case 3:
				printf("Three ");
				break;
			case 4:
				printf("Four ");
				break;
			case 5:
				printf("Five ");
				break;
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine ");
				break;
		}
		rev/=10; //to remove last digit in number
	}
	printf("\n");
return 0;
}

