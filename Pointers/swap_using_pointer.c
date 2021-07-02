#include<stdio.h>
void swap(int *num1, int *num2);
int main(void)
{
	int num1,num2;
	printf("Enter the two numbers to swap :");
	scanf("%d %d",&num1,&num2);
	printf("Before swap num1= %d  num2= %d \n",num1,num2);
	swap(&num1,&num2);
	printf(" After swap num1= %d num2=%d \n",num1,num2);
	return 0;
}

void swap(int *num1, int *num2)
{
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
}

