#include<stdio.h>
#define N 100
int find_dup(int arr[],int n);
int main(void)
{
	int arr[N],i,n;
	printf("Enter the array size: ");
	scanf("%d",&n);  //To read array size
	//to read array elements
	for(i=0;i<n;i++)
	{
		printf("Enter the value for arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	if(find_dup(arr,n))
		printf("Duplicate Found\n");
	else
		printf("Duplicate not found\n");

		return 0;
}
//function to find duplicate elements in an array
int find_dup(int arr[],int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i] == arr[j]) //to find duplicate
			{
				return 1;
			}
		}
	}
return 0;
}
