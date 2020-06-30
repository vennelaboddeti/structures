#include<stdio.h>
struct employee
{
	int empno;
	char empname[50];
	char department[50];
	int salary;
};
void print_details( struct employee e[]);
int main()
{
	struct employee c[20];
	int i;
	printf("enter details of employees as follows:\nempno\nempname\ndepartment\nsalary\n");
	for(i=0;i<20;i++)
	{
		printf("enter details of employee[%d]:\n",i);
		scanf("%d %s %s %d",&c[i].empno,&c[i].empname,&c[i].department,&c[i].salary);
	}
	
	void print_details( c [20]);
	return 0;
}
void print_details(struct employee e [int a])
{
	int i;
	printf("empno\t\tname\t\tdepartment\t\tsalary\n");
	for(i=0;i<a;i++)
	{
	   	printf("%d\t\t%s\t\t%s\t\t%d\t\t\n",e[i].empno,e[i].empname,e[i].department,e[i].salary);
	}
	
	
}
