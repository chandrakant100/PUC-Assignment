/*programme:To compute the sum of indivisual digits of a positive integers.
 * created by:chandrakant jena
 * file name:one.c
 *date:
*/
#include<stdio.h>
int main()
{	
	int num,sum=0,temp;
	printf("Enter the the +ve integer:");
	scanf("%d",&num);
	printf("The Entered digit is:%d",num);
	while(num!=0)
		{
			temp=num%10;
			sum+=temp;
			num=num/10;
		}
	printf("\nThe sum of indivisual digits is=%d",sum);
return 0;
}
