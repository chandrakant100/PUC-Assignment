//programm to display each line in reverse order
#include<stdio.h>
#include<stdlib.h>
void reverse()
{
	FILE *fp;
	char ch;

	fp=fopen("reverse.txt","r");
	fseek(fp,-1L,SEEK_END);

	printf("\nDISPLAYING IN REVERSE ORDER:\n");

	while(ftell(fp)>=0)
	{
		ch=getc(fp);
		printf("%c",ch);
		if(fseek(fp,-2L,SEEK_CUR)== -1)
			break;
	}
	fclose(fp);

}
int main()
{
	FILE *fp;

	system("clear");

	char ch;

	fp=fopen("reverse.txt","w");

	printf("Enter the contents:(press ctrl+D):");
	while((ch=fgetc(stdin))!=EOF)
	{
		fputc(ch,fp);
	}
	fclose(fp);
	reverse();

	
return 0;
}
