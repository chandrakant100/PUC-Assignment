//programm for gcd using recursion
#include<stdio.h>
int gcd(int num1,int num2,int i,int g)
{

	if(i>num1 || i>num2)
		return g;
	else
		if(num1%i==0 && num2%i==0)
			g=i;
	gcd(num1,num2,i+1,g);
}
int main()
{
	int num1,num2,gcd1; 
	printf("Enter the  two  numbers:\n");
	scanf("%d%d",&num1,&num2);
	gcd1=gcd(num1,num2,1,1);
	printf("\nThe GCD of %d,%d is %d",num1,num2,gcd1);
	return 0;
}
