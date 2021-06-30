#include<stdio.h>
int main(void)
{
	int rows,coef=1,i,j;
	printf("Enter the number of rows :");//read input for rows.
	scanf("%d",&rows);
	for(i=0; i<rows; i++)//for row 
	{
    	for(j=0; j<= i; j++)//for column
		{
			if(j==0 || i==0)//print 1 if begining of each row
				coef =1;
			else
				coef =coef*(i-j+1)/j;// generate pascal triangle numbers
			printf("%4d", coef);//print the numbers.
		}
		printf("\n");
	}
	return 0;
}

		
