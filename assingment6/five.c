/*programme:To check a number is perfact number or not.
 * created by:chandrakant jena
 * file name:five.c
 * date:
 */
#include<stdio.h>
int main()
{
	int num,sum=0,n;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("\nThe number is=%d",num);
	n=num;
	for(int i=1;i<num;i++)
		{
			if(num%i==0)
				sum+=i;
		}
	if(sum==n)
		printf("\nThe number is perfact number");
	else
		printf("\nThe number is not a perfact number");
return 0;
}
