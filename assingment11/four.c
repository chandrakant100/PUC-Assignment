//programme to input a word and insert a charcter at the particular position
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],ch;
	int pos,i,len;
	printf("Enter a word:");
	fgets(a,100,stdin);
	for(i=0;i<a[i]!='\0';i++)
		len++;

	printf("Enter any character:");
	scanf("%c",&ch);

	printf("Enter the position you want to insert:");
	scanf("%d",&pos);

	for(i=len-1;i>=pos;i--)
		{
		a[i+1]=a[i];
		}
		a[pos]=ch;

	for(i=0;i<=len;i++)
		printf("%c",a[i]);

	
return 0;	
}
