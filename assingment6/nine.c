/*programme:To find the GCD of two numbers
 * created by:chandrakant jena
 * file name:nine.c
 * date:
 */
#include<stdio.h>
int main()
{
	int num1,num2,gcd;
	printf("Enter two numbers to find GCD:\n");
	scanf("%d%d",&num1,&num2);
	for(int i=1;i<num1 || i<num2;i++)
		{
			if(num1%i==0 && num2%i==0)
				gcd=i;
		}
	printf("\nGCD is=%d",gcd);
return 0;
}
