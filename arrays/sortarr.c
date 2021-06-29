#include<stdio.h>
#define N 10
int main(void)
{
	int a[N],i,j,min,temp;
	//read array elements
	printf("Enter the array elements \n");
	for(i=0;i<N;i++)
	{
		printf("Enter the value for a[%d] :",i);
		scanf("%d",&a[i]);
	}
 //to swap the elements according to accending order.
 	for(i=0;i<N-1;i++)
	{
		min=i;
		for(j=i+1;j<N;j++)
		{
			if(a[min] > a[j])//comparing one element to another if low value find.
				min=j;   //assign low index value to min
		}
		if(i != min)  //to check index value same or not
		{   //to swap the values
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}

     }
     printf("The sorted list \n");//print array after sorting
     for(i=0;i<N;i++)
       printf("%d  ",a[i]);

       printf("\n");
  return 0;
}
			

