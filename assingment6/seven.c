/*programme:To check the number is strong number or not
 * created by:chandrakant jena
 * file name:seven.c
 * date:
 */
#include<stdio.h>
int main()
{
	int num,n,fact=1,temp,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	n=num;
	printf("\nThe number is=%d",num);
	while(num)
		{
			temp=num%10;
			for(int i=temp;i>=1;i--)
				{	
					fact*=i;
				}
			sum+=fact;
			num=num/10;
			fact=1;
		}	
	if(sum==n)
		printf("\nIt is a strong number:");
	else
		printf("\nIt is not a strong number:");
return 0;
}
