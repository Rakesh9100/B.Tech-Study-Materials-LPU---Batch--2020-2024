#include<stdio.h>>
#include<conio.h>
int variable=200;//global variable
void show();
int main()
{
printf("\nValue of global variable %d",variable);//0
int variable1=10+variable;//10
show();
printf("\nvalue of global variable%d",variable);
printf("\nValue is %d",variable);
getch();
}
void show()
{
variable =variable+200;
printf("\nvalue of global variable %d",variable);//200
//printf("\nValue is %d",variable1);
}
