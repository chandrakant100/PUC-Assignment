*Programme to find greatest among 3 numbers
*created:chandrakant jena
*file name:big.c
*date:
*/
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the 3 numbers:");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("A is the biggest:%.2f",a);
	}
	else if(b>a)
	{
		if(b>c)
		printf("B is the biggest number:%.2f",b);
	}
	else if(c>a)
	{
		if(c>b)
		printf("C is the biggest number:%.2f",c);
	}
	else
		printf("All numbers are equal");
return 0;
}

