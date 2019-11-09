/*programme:To check it is tech number or not
 * created by:chandrakant jena
 * file name:eight.c
 * date:
 */
#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,x,num1,num2,n,tech,count=0,temp;
	printf("Enter the number:");
	scanf("%d",&num);
	n=num;	
	printf("\nThe number is:%d",num);
	while(num)
		{
			temp=num%10;
			count+=1;
			num=num/10;
		}
	if(count%2==0)
		{
			printf("\nIt has even number of digits:");
			i=count/2;
			x=pow(10,i);
			num1=n%x;
			num2=n/x;
			tech=(num1+num2)*(num1+num2);
			if(tech==n)
				printf("\nIt is a tech number:");
			else
				printf("\nIt is not a tech number:");
		}
	else
		printf("\nTech number cannot be found:");
return 0;
}
