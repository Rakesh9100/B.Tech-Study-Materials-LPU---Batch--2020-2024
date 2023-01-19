#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[20]="hello";
	puts(str);
	int len; 
	len=strlen(str);//used calculate total length of string 
	printf("length of string is %d\n",len);
	strupr(str);//strlwr(str) to convert lower case letters into upper case 
	puts(str); 
	strrev(str);// to reverse the string 
	puts(str); 
	char str2[30];
	strcpy(str2,str);//copy one string into another 
	puts(str2); 
	char *str1="students";
	strcat(str,str1);
	puts(str);
	return 0 ;
}

