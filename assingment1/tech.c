/*To find the tech number
*created by:chandrakant jena
*file name:tech.c
*date:
*/
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the 4 digit number:\n");
	scanf("%d",&a);
	if(sizeof(a)==4)
		{
			b=a%100;
			c=a/100;
			d=(b+c)*(b+c);
			if(d==a)
				printf("the entered number is Tech number:%d\n",a);
			else
                		printf("The number is not a tech number");

		}
	else
		printf("The size of number is greater than 4:");
return 0;	
}
