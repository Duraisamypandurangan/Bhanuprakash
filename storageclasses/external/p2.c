#include<stdio.h>
extern int inc(void);
extern int gnum;
void file2(void)
{
	printf("In file p2 the gnum is %d\n",gnum);
    inc();
}


