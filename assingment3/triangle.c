/*programme:to display which type of triangle is it.
*created by:chandrakant jena
*file name:triangle.c
*date:
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the sides of the triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b)>c && (a+c)>b && (b+c)>a)
		{
			printf("The triangle is possible:\n");
			if(a==b && a==c)
				printf("It is a equilateral triangle:");
			else if(a==b || a==c ||b==c)
				printf("It is a isosceles triangle:");
			else if(a!=b && a!=c && b!=c)
				printf("It is a scalene triangle:");
			else
				printf("wrong");
		}
	else
		printf("It dont satishfy the triangle law:");
return 0;
}
