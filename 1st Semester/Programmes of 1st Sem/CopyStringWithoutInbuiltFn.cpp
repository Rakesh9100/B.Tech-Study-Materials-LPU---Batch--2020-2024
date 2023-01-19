#include<stdio.h>

int main(void)
{
	char ch[10],bh[10];
	int i=0;
	printf("enter string=");
	gets(ch);
	while(ch[i]!='\0')
	{
		bh[i]=ch[i];
		i++;
	}
	printf("\ncopied string is=");
	puts(bh);
	return 0;
}

