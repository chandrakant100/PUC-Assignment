/*programme:to find roots of the quadratic equations
*created by:chandrakant jena
*file name:root.c
*date:
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,root1,root2;
	printf("enter the value of contants:");
	scanf("%d%d%d",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(d>=1)
		{
			root1=((-b)+sqrt(d))/(2*a);
			root2=((-b)-sqrt(d))/(2*a);
			printf("The roots are:%d\n%d",root1,root2);
		}
	else if(d==0)
		{
			root1=(-b)/(2*a);
			root2=(-b)/(2*a);
			printf("The roots are:%d\n%d",root1,root2);	
		}
	else
			printf("It has imaginary roots");
return 0;
}
