//programm to print number of vowels
#include<stdio.h>
int main()
{
	char a[100];
	int i=0,count=0;
	printf("Enter the string:\n");
	fgets(a,100,stdin);
	while(a[i]!='\0')
		{
			if(a[i]=='A'|| a[i]=='E' || a[i]=='I'|| a[i]=='O'||a[i]=='U'|| a[i]=='a'|| a[i]=='e'|| a[i]=='i'||a[i]=='o'||a[i]=='u')
							count++;
			i++;
		}
	printf("\nNO. of vowels present %d",count);
return 0;
}
