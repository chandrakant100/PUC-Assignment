/*programme:Read +ve integers and reverse it and display it.
 * created by:chandrakant jena
 * file name:two.c
 * date:
 */
#include<stdio.h>
int main()
{
	int num,temp,rev=0;
	printf("Enter the +ve integer:");
	scanf("%d",&num);
	printf("\nThe entered number is:=%d",num);
	while(num!=0)
		{
			temp=num%10;
			rev=(rev*10)+temp;
			num=num/10;
		}
	printf("\nThe reverse is=%d",rev);
return 0;	
}
