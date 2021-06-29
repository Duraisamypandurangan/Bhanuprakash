#include<stdio.h>
#define ROW 100
#define COL 100
int main(void)
{
	int arr[ROW][COL],i,j,n,m;
	//To enter the row and column size
	printf("Enter size of rows :");
	scanf("%d",&n);
	printf("Enter size of  column :");
	scanf("%d",&m);
	//to read the array
	for(i=0; i<n; i++)
	{ 
		for(j=0; j<m; j++)
		{
			printf("Enter the value for arr[%d][%d] :",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	//To print the arra using single loop
	for(i=0; i<(m*n);	)
	{
		printf("%d	",arr[i/m][i%m]);
		i++;
		if(i % m == 0)
		printf("\n");
	}
		printf("\n");
  return 0;
}
		
		

