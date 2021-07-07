/*******************************************************************************
** COPYRIGHT (C) 2021 Infiquity. ALL RIGHTS RESERVED.
--------------------------------------------------------------------------------
FILE NAME  :a_structure_pointer.c

DESCRIPTION:This file contains function to access structure member using 
structure pointer
*******************************************************************************/

/*******************************************************************************
** -- File Inclusion --
*******************************************************************************/

#include<stdio.h>

/*******************************************************************************
** -- Local Data Declarations --
*******************************************************************************/

/*******************************************************************************
** -- Global Data Declarations --
*******************************************************************************/
 struct stu
{
	int id;
	char name[50];
	float marks;
};
/*******************************************************************************
** -- Macros --
*******************************************************************************/

/*******************************************************************************
** -- Global Variables Initializations --
*******************************************************************************/

/*******************************************************************************
** -- Function Prototypes --
*******************************************************************************/

/*******************************************************************************
** -- Functions --
*******************************************************************************/

/*******************************************************************************
**--main()Function--
********************************************************************************/
int main(void)
{
	struct stu s1, *stu1=&s1;//Decalre struct variable and pointer.
	printf("Enter the student1 id :");
	/*read inputs*/
	scanf("%d",&stu1->id);
	getchar();
	printf("Enter the student1 name :");
	fgets(stu1->name,50,stdin);
	printf("Enter the marks of student1 :");
	scanf("%f",&stu1->marks);
	/*write output to console*/
	printf("The student1\nid:%d\nname:%smarks:%f\n",stu1->id,stu1->name,stu1->marks);
return 0;
}
