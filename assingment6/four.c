/*programme:To check it is prime no. not
 * created by:chandrakant jena
 * file name:four.c
 * date:
 */
#include<stdio.h>
int main()
{
	int num,m=0;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("\nThe Entered number is=%d",num);
	if(num==1)
		printf("\nThe number is neither prime nor composite:");
	for(int i=2;i<num;i++)
		{
			if(num%i==0)
				m=1;
				break;
		}
	if(m!=1)
		printf("\nThe number is a prime number:");
	else
		printf("\nThe number is not a prime number");
return 0;
}
