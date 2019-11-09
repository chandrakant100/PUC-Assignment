/*programme:To check it is a armdtrong number or not.
 * created by:chandrakant jena
 * file name:six.c
 * date:
 */
#include<stdio.h>
int main()
{
	int num,n,temp,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	n=num;
	printf("\nThe number is=%d",num);
	while(num)
		{
			temp=num%10;
			sum+=(temp*temp*temp);
			num=num/10;
		}
	if(sum==n)
		printf("\nThe number is an armstrong number:");
	else
		printf("\nThe number is not a armstrong number:");
return 0;
}
