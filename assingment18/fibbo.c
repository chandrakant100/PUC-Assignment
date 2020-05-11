//programm to print fibonacci series using recursion
#include<stdio.h>
int fibo(int num)
{
	if(num<=1)
		return 1;
	else
		return(fibo(num-1)+fibo(num-2));
}
int main()
{
	int num,fibo1,i;
	printf("Enter the number upto which you want the fibonacci series:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
		printf("%d ",fibo(i));
return 0;
}
