//programm to print number of vowels
#include<stdio.h>
int main()
{
	char a[100];
	int i=0,count=0;
	printf("Enter the string:");
	fgets(a,100,stdin);
	if((a[0]=='A'|| a[0]=='E' || a[0]=='I'|| a[0]=='O'||a[0]=='U'|| a[0]=='a'|| a[0]=='e'|| a[0]=='i'||a[0]=='o'||a[0]=='u') && a[1]==' ')
		count=1;
	i=1;
	while(a[i]!='\0')
		{
			if(a[i]==' ')
				{
					if(a[i+1]=='A'|| a[i+1]=='E' || a[i+1]=='I'|| a[i+1]=='O'||a[i+1]=='U'|| a[i+1]=='a'|| a[i+1]=='e'|| a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u')
						if(a[i+2]==' ' || a[i+3]=='\0')
							count++;
				}
			i++;
		}
	printf("\nNO. of vowels present %d",count);
return 0;
}
