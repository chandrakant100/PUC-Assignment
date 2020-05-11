/*To convert decimal to octal
 */
#include<stdio.h>
#include<math.h>
int main()
{
	int num,oct=0,temp,x,i=0;
	printf("Enter the decimal no:");
	scanf("%d",&num);
	while(num)
		{
			temp=num%8;
			x=pow(10,i);
			oct=(temp*x)+oct;
			num=num/8;
			i++;
		}
	printf("\nThe octal is=%d",oct);
return 0;
}
