//programme to input a word and sort the character desending oder
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],temp;
	int l,i,j;
	printf("Enter the word:\n");
	scanf("%[^\n]",a);
	l=strlen(a);
	printf("The sorting of the word in decending is:\n");
	for(i=0;i<l-1;i++)
	for(j=0;j<l-1;j++)
		{	
			if(a[j]<a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}	
		}
	for(i=0;i<l;i++)
		printf("%c",a[i]);

return 0;	
} 
