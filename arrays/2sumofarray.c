#include<stdio.h>
int sum(int arr[],int n);
void printarray( int arr[], int n);
int main(void)
{
	int i,n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int arr[n];
	//read the values for array
	for(i=0;i<n;i++)
	{
		printf("Enter the value for  arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	printarray(arr,n);
	printf("\nThe sum of all array elements is %d \n",sum(arr,n));
}

//function to print array elements.
void printarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
}

//function to find sum of all array elements.
int sum(int array[], int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
        sum+=array[i];
	return sum;
}
