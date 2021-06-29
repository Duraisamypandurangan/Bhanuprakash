#include<stdio.h>
#define MAX 100
void merge_arr(int arr1[],int arr2[],int arr3[],int n1,int n2);
int duplicate(int arr3[],int size);
int main(void)
{
	int arr1[MAX],arr2[MAX],arr3[2*MAX],n1,n2,i,size;
	
	printf("Enter the size of array 1 :");
	scanf("%d",&n1);
	//To enter the first array elements
	printf("Enter the elements for array1\n"); 
       		for(i=0;i<n1;i++)
		{
		  printf("Enter the value for array1[%d] :",i);
		  scanf("%d",&arr1[i]);
		}
	
	printf("Enter the size of array 2:");
	scanf("%d",&n2);
	//To enter the second array elements
	printf("Enter the elements for array2\n");
       		for(i=0;i<n2;i++)
		{
		  printf("Enter the value for array2[%d] :",i);
		  scanf("%d",&arr2[i]);
		}
	merge_arr(arr1,arr2,arr3,n1,n2);
	//To print the array after merging 2 arrays	
	size= n1+n2;
	printf("after merging 2 arrays\n");
	for(i=0;i<size;i++)
		printf("%d ",arr3[i]);
	printf("\n");
	
	//To delet duplicate element
	size= duplicate(arr3,size);

	//To print array after deleting the duplicates	
	printf("after erase duplicates in arrays \n");
	for(i=0;i<size;i++)
		printf("%d ",arr3[i]);	
	printf("\n");

	return 0;
}
	void merge_arr(int arr1[],int arr2[],int arr3[],int n1,int n2)
	{
	int i=0,j=0,k=0;
	
	//To copy first array elements into array3	
	while(i<=n1-1)
	    arr3[k++]=arr1[i++];
	//To copy second array elements into array3
	while(j<=n2-1)
	    arr3[k++]=arr2[j++];
	}

	int duplicate(int arr3[],int size)
	{
          int i,j,k;
    		for(i=0; i<size; i++)
			{
				for(j=i+1; j<size;	)
				{
					if(arr3[i]==arr3[j])//To find duplicate.
					{
						size--;
						for(k=j; k<size; k++)
							arr3[k]=arr3[k+1];
					}
					else
						j++;
				}
			}
			return size;
	}
