#include<stdio.h>
#include<math.h>
int main()
{
	int num=0,bin,temp,x,i=0;
        printf("Enter the binary number:");
	scanf("%d",&bin);
	while(bin)
		{
			temp=bin%10;
			x=pow(2,i);
			num=(temp*x)+num;
			bin=bin/10;
			i+=1;
		}
		printf("The decimal is=%d",num);
return 0;
}
