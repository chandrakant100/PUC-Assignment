//programm to print each line in reverse order
#include<stdio.h>
#include<string.h>
int main()
{
	char str[6][100];
	int num,i,j;
	printf("Enter the number of lines:");
	scanf("%d",&num);
	fgetc(stdin);
	for(i=0;i<num;i++)
		{
			fgets(str[i],100,stdin);
		}
	for(i=0;i<num;i++)
		{
			for(j=strlen(str[i]);j>=0;j--)
				printf("%c",str[i][j]);
			printf("\n");
		}
return 0;
}
