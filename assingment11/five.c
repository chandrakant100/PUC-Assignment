//programme to delete the specific character
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],ch,temp;
	int l,j,i,num;
	printf("Enter the string:");
	fgets(a,100,stdin);
	printf("Enter the character to be deleted:");
	scanf("%c",&ch);
	l=strlen(a);
	for(i=0;a[i]!='\0';i++)
		{
			if(a[i]==ch){
				num=i;
				break;}
		}
	for(j=num;j<l-1;j++)
		{
		a[j]=a[j+1];
		}
	Printf("The final string after deletion of %c is:",ch);
	for(i=0;i<l-1;i++)
		{
		printf("%c",a[i]);
		}
return 0;	
}
