//programm to find the exponent of a number
#include<stdio.h>

int power(long int num1, long int num2)
{
	if(num2 == 0)
		return 1;
	else
		return (num1 * power(num1, num2-1));
}

int main()
{
	int num1, num2;

	printf("Enter a number and it's power: ");
	scanf("%d%d", &num1, &num2);

	printf("%d ^ %d = %d\n", num1, num2, power(num1, num2));

	return 0;
}
