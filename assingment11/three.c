//programm to print a string in reverse order without using library function
#include<stdio.h>
int main()
{
	char a[100];
	int len=0,i;
	printf("Enter the string:\n");
	fgets(a,100,stdin);
	for(i=0;a[i]!='\0';i++)
		len++;
	for(a[len-1]!='\0';len>=0;len--)
		printf("%c",a[len-1]);

return 0;
}
