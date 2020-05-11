/*programme:To convert upper case to lower case and vice versa
*created by:chandrakant jena
*file name:convert.c
*date:
*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter nay character:");
	scanf("%c",&ch);
	(ch>='A' && ch<='Z')?(ch+=32):(ch-=32);
	printf("%c",ch);
return 0;
}
