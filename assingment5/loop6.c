/*programme:To find the factorial of a number.
*created by:chandrakant jena
*file name:loop6.c
*date:
*/
#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("Enter the number to get the factroial:\n");
	scanf("%d",&num);
	printf("The number is=%d",num);
	for(i=num;i>=1;i--)
		{
			fact*=i;
		} 
	printf("\nThe factorial is=%d",fact);
return 0;
}
