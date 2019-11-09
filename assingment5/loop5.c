#include<stdio.h>
int main()
{
	int num1,num2,i,product=1;
	printf("Enter the the starting numbe0:\n");
	scanf("%d",&num1);
	printf("Enter the range to which you want to find the product:");
	scanf("%d",&num2);
	if(num2>num1)
		{
			for(i=num1;i<=num2;i++)
				product*=i;
		}
	else
		printf("range is less than starting number:");
printf("%d",product);
return 0;
}
