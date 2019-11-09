/*programme to check the number is even or odd
*created by:chandrakant jena
*file name:evenodd.c
*date:
*/
#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number:");
	scanf("%d",&num);
	if(num%2==0)
		printf("The number is even:%d",num);
	else
		printf("the number is odd:%d",num);
return 0;		
}
