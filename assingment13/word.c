//programm for word extraction
#include<stdio.h>
int main()
{

	char a[100],word[20];
	int i,m=0,j=0;
	printf("Enter the string:\n");
	scanf("%[^\n]",a);

	start:
	for(i=j;a[i]!=' ';i++)
		{
			if(a[i]=='\0')
				break;
			else
				word[m++]=a[i];
		}
	if(a[i]==' ')
		{
			word[m]='\0';
			printf("\n%s",word);
			j=i+1;
			m=0;
			goto start;
			
		}
	else if(a[i]=='\0')
		{
			word[m]='\0';
                        printf("\n%s",word);
			goto end;
		}
	end:
		printf("\nEND");
return 0;
}
