#include <stdio.h>
#include <string.h>
int main(void)
{
char s1[20], s2[20];
int result;
printf("\nEnter any string: ");
gets(s1);//dad
strcpy(s2, s1);// s1=wow s2=wow
strrev(s2);//wow
result = strcmp(s1, s2);
if(result == 0)
printf("\nIt is a palindrome string");
else
printf("\nIt is not a palindrome string");
	return 0;
}

