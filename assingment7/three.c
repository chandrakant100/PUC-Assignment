//programme to convet decimal to hexadecimal
#include<stdio.h>
int main()
{
	char A[10];
	int num,temp,i=0,count=0;
	printf("Enter the decimal number:");
	scanf("%d",&num);
	while(num)
	{
		temp=num%16;
		if(temp>=10)
			A[i++]=55+temp;
		else
			A[i++]=48+temp;
		count++;
		num/=16;
	}
	for(i=count-1;i>=0;i--)
		printf("%c",A[i]);

	
return 0;
}
