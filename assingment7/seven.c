//programme to print multiplication table of a given number
#include<stdio.h>
int main()
{
	int num,i,prod;
	printf("Enter the number to get multiplication table of that number:");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
		{
			prod=num*i;
			printf("%d*%d=%d",num,i,prod);
			printf("\n");
		}
return 0;	
}
