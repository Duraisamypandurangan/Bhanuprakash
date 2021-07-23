#include<stdio.h> //Preprocessor Directive to Include stdio.h header file
void swap(int *num1, int *num2);//Function Declaration
int main(void) 
{
	int num1,num2;//Variable Declaration
	printf("Enter the two numbers to swap :");
	scanf("%d %d",&num1,&num2);//Read Input Values
	printf("Before swap num1= %d  num2= %d \n",num1,num2);
	swap(&num1,&num2);//Function Call to Swap 2 numbers
	printf(" After swap num1= %d num2=%d \n",num1,num2);
	return 0;//for Successful Execution
}

void swap(int *num1, int *num2)
{
	int temp=*num1;//Declaring Temp localy to Swap 2 numbers
	*num1=*num2;
	*num2=temp;
}

