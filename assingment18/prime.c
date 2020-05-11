//programm to find prime number using recursion
#include<stdio.h>
int prime_no(int num,int num1)
{
	if(num==num1)
		return 1;
	else if(num%num1==0 )
		return 0;
	else 
		prime_no(num,num1+1);

}
int main()
{
	int num,prime,i=2;
	printf("Entre the number you want to insert:\n");
	scanf("%d",&num);
	
	prime=prime_no(num,i);
	if(prime==0)
	printf("\nNOT a prime number");

	else
		printf("\n %d is Prime number:",num);

return 0;
}
