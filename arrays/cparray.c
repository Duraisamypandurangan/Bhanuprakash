#include<stdio.h>
#define max 100
void cpyarr(int a[],int b[], int N);
int main(void)
{
	int i,N,a[max],b[max];
	printf("Enter the array size :");// to enter the size of array
	scanf("%d",&N);
	printf("Enter the array elements \n");
	//To read the array elements
	for(i=0; i<N; i++)
	{
		printf("Enter the value for a[%d] :",i);
		scanf("%d",&a[i]);
	}
	cpyarr(a,b,N-1);//function call to copy array elements
	
	printf("Original array elements\n"); 
	for(i=0;i<N;i++)// To display original array
		printf("%d  ",a[i]);
	
	printf("\nCopied array elements\n");
	for(i=0;i<N;i++) //To Display duplicate array
		printf("%d  ",b[i]);
	
	printf("\n");
    return 0;
}
//function to copy elements from one array to another array
void cpyarr(int a[],int b[],int N)
{

	if(N < -1)
		return ;
    b[N]=a[N];
    return cpyarr(a,b,N-1);//recursive function to copy array elements
}

