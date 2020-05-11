//programm to print like:
//input:chandra kant jena
//output:jena chandra kant
#include<stdio.h>
int main()
{

	char a[100],word[20],ch;
	int i,m=0,j=0,count=0;
	printf("Enter your name:\n");
	scanf("%[^\n]",a);

	start:
	for(i=j;a[i]!='\0';i++)
		{
			if(a[i]==' ')
				count++;
			if(count==2){
				for(j=i;a[j]!='\0';j++)
					word[m++]=a[j];
					break;
					}
		}
	a[i]='\0';
	printf("%s ",word);
	for(i=0;a[i]!='\0';i++)
		printf("%c",a[i]);
		
return 0;
}
