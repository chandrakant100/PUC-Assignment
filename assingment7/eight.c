//programme to add the digits till it reduces to single digit
#include<stdio.h>
int main()
{
	int num,temp,rem,count=0,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	temp=num;
	begin:
	while(temp)
		{
			rem=temp%10;
			sum+=rem;
			count++;
			temp=temp/10;
		}
	if(count!=1){
			temp=sum;
			sum=0;
			count=0;
			goto begin;
		}
	else 	
		printf("The single digit is=%d",sum);
return 0;	
}
