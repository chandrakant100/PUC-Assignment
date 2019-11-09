/*programme:to check a number is alphanumeric or not.
*created by:chandrakant jena
*file name:alphanum.c
*date:
*/
#include<stdio.h>
int main(){
	char c;
	int a;
	printf("Enter any character:");
	scanf("%c",&c);
	a=(int)c;
	if((a>=65 && a<=90) || (a>=97 && a<=122) || (a>=48 && a<=57))
		{
			printf("The entered number is alphanumeric=%c",c);
		}
	else
		printf("The number is not alphanumeric");
return 0;
}
