#include<stdio.h>
#include<conio.h>

void inc();
int main()
{
inc();
inc();
inc();
//printf("%d",a);

getch();
}
void inc()
{
static int a;//1
a++;
printf("\n%d",a);//3
}
