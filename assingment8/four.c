//programm to store the digits of a number in an array
#include<stdio.h>
int main()
{
	int num,a[20],i=0,count=0,n,temp;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num)
		{
			temp=num%10;
			a[i]=temp;
			i++;
			count++;
			num/=10;
		}
	printf("\nThe digits in the array:\n ");
	for(i=count-1;i>=0;i--)
		printf("%d ",a[i]);

return 0;
}
