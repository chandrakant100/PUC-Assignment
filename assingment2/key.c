/*programme to check a key is printable,space,alphabet,digit,controlkey
*created by:chandrakant jena
*file name:key.c
date:
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
	char key;
	printf("Enter any key:");
	scanf("%c",&key);
	if(isprint(key))
		{
			printf("The key is printable:\n");
			if(isalpha(key))
				printf("The key is an alphabet:%c",key);
			else if(isdigit(key))
				printf("The key is a digit:%c",key);
			else if(isspace(key))
				printf("The key is a space:%c",key);
			else
				printf("The key is not there");
		}
	else if(iscntrl(key))
		printf("The key is not printanle and it is control key");
	else
		printf("The key is not there");
return 0;
}
