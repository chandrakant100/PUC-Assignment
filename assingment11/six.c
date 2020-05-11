//programme to check a string is pallandrome or not
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int l,i,j,flag;
	printf("Enter the string:");
	scanf("%[^\n]",a);	
	l=strlen(a);
	for(i=0,j=l-1;i<=(l-1)/2;i++,j--)
		{
			if(a[i]!=a[j])
				flag=1;
				break;
		}
	if(flag!=1)
		printf("\npallandrome");
	else
		printf("\nnot a pallandrome");
return 0;

}
