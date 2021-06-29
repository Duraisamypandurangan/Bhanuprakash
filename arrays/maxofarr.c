#include<stdio.h>
#define N 100
int main(void)
{
	int a[N]={0},i,n;
	printf("Enter the array size :");
	scanf("%d",&n);
	for(i=0;i<n;i++) // Input for array elements
	{
		printf("Enter the a[%d] element of array :",i);
		scanf("%d",&a[i]);
	}
	
	int max=a[0];

	for(i=0;i<n;i++) // To find maximum number in array
	{
		if(a[i] > max)
			max=a[i];
	}
	int min=a[0];
	for(i=0;i<n;i++) // To find minimum number in array
	{
		if(a[i] < min)
			min=a[i];
	}
	
	printf("The maxmimum number in array is %d\n",max); // To print the maximum number in array
	printf("The minimum number in array is %d\n",min); // To print the minimum number in array
	return 0;
}
	
