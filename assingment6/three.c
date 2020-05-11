/*programme:To display a number is pallandrom or nor.
 * created by:chandrakant jena
 * file name:three.c
 * date:
 */
#include<stdio.h>
int main()
{
	int num,n,temp,rev=0;
	printf("Enter a +ve integer:");
	scanf("%d",&num);
	printf("\nThe entered number is=%d",num);
	n=num;
	while(num)
		{
			temp=num%10;
			rev=(rev*10)+temp;
			num=num/10;
		}
	if(rev==n)
		printf("\nThe entered number is a pallandrom");
	else
		printf("\nThe entered number is not a pallandrom");
return 0;
}
