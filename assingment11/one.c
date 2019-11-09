//programme to find number of words present in a string
#include<stdio.h>
int main()
{
	char a[100];
	int count=1,i=0;
	printf("Enter the string:\n");
	fgets(a,100,stdin);
	while(a[i]!='\0')
		{
			if(a[i]==' ')
				count++;
			i++;
		}	
	printf("\nNO. of words present in this string is %d",count);
	
return 0;
}
