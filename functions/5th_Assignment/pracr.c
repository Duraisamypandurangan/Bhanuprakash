#include<stdio.h>
void  print_num(int num);
int main(void)
{
	int num=100;
	printf("\n");
	print_num(num);
	printf("\n");
	return 0;
}
void print_num(int num)
{
	if(num > 1)
		print_num(num-1);

	printf("%3d  ",num);
	if(num%10==0)
		printf("\n\n");
	
}



