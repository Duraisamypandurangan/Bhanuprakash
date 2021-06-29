#include<stdio.h>
#define N 100
void find_freq(int arr[],int n); 
int main(void)
{
    int arr[N],i,n;
    printf("Enter the array size: ");//read array size
    scanf("%d",&n);
    //to read array elements
    for(i=0;i<n;i++)
    {   
        printf("Enter the value for arr[%d] :",i);
        scanf("%d",&arr[i]);
    }   
    find_freq(arr,n);//function call to count frequency of each elements of array

        return 0;
}
//function call to find freq of array elements
void find_freq(int arr[],int n)
{
    int i,j,k,count;
    for(i=0; i<n; i++)
    {   
        count=1;//initial count for element
        for(j=i+1; j<n;	)
        {
            if(arr[i] == arr[j]) //to find repeated elements
            {
                count++;  // if found duplicate then count will incremented by 1
                n--;//after counting duplicate erase it.
                for(k=j; k<n; k++) //alter the array
                	arr[k]=arr[k+1];
            }
			else
				j++; //if not found duplicate check for next element
        }
        printf("Element %d is repeated %d times\n",arr[i],count);//to print final output
        
	}
}
