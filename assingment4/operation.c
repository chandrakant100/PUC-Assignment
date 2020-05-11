/*progamme:To isplay menu of 5 basic arithmatic operaions.
*created by:chandrakant jena
*file name:operation.c
*date:
*/
#include<stdio.h>
int main()
{
	int num1,num2,num;
	char ch;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	printf("Enter the operaion you want:'+','-','*','/','%%':");
	ch=getchar();
	scanf("%c",&ch);
	
	switch(ch){
			case '+':num=num1+num2;
				printf("The value is=%d",num);
				break;
			case'-':num=num1-num2;
				printf("The value is=%d",num);
				break;
			case '*':num=num1*num2;
				printf("The value is=%d",num);
				break;
			case '/':num=num1/num2;
				printf("The value is=%d",num);
				break;
			case '%':num=num1%num2;
				printf("The value is=%d",num);
				break;
			default: printf("Invalid expression:");
					break;
		  }
return 0;
}
