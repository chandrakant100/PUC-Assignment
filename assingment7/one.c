/*programme:To convert decimal to binary
 * created by:chandrakant jena
 * file name:one.c
 *date:
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int num,temp,bin=0,i=0,x;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num)
		{
			temp=num%2;
			x=pow(10,i);
			bin=(temp*x)+bin;
			num=num/2;
			i+=1;
		}
	printf("\nThe binary is=%d",bin);
return 0;
}
