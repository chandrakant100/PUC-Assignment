//program for printing multiplication table using recursion
#include<stdio.h>
void mul(int num,int i)
{
	printf("%d * %d=%d\n",num,i,num*i);
	if(i<10)
		return mul(num,i+1);
}
int main()
{
	int num;
	printf("Enter the number to get the multiplication table:\n");
	scanf("%d",&num);
	mul(num,1);
return 0;
}
