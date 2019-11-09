//programme to find the cube of odd positin and square of even position
#include<stdio.h>
int main()
{
	int num,i=1,n,x,count=0,temp;
	printf("Enter the number:");
	scanf("%d",&num);
	n=num;
	while(num)
		{
			temp=num%10;
			count++;
			num=num/10;
		}
	while(n)
		{	
			temp=n%10;
			if(i%2==0)
				{
					x=(temp*temp);
					printf("\nThe square of even position=%d that is:%d",i,x);
				}
			else{
				x=(temp*temp*temp);
				printf("\nThe cube of odd position=%d that is:%d ",i,x);
				}
			n=n/10;
			i++;
			
		}
return 0;
}    
