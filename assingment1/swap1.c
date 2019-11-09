/*swapping without third variable.
*created by:chnadrakant jena.
*file name:swap1.c
*date:11/09/19
*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the numbers to be swapped:");
	scanf("%d%d",&a,&b);
	printf("the value of A is=%d\n",a);
	printf("the value of B is=%d\n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping A=%d\n",a);
	printf("after swapping B=%d\n",b);
	return 0;	
}
# assingment1
