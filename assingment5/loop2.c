/*programme:To print first 30 even numbers.
*created by:chandrakant jena
*file name:loop2.c
*date:
*/
#include<stdio.h>
int main()
{
	int i,count=0;
	for(i=2;i<=60;i+=2)
		{
			printf("%d ",i);
			count++;
		}
	printf("No. of even digits is=%d",count);
return 0;
}
