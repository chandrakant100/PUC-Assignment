//programm to display the words of the file whose length is >4
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void display()
{
	FILE *f;
	int count=0;
	char word[20]={0},ch[2];
	ch[1]='\0';
	f=fopen("words.txt","r");
	if(!f)
	{
		printf("ERROR IN OPENING");
		exit(0);
	}
	

	while(1)
	{
		ch[0]=fgetc(f);
		if(ch[0]==EOF)
			break;
		if(ch[0]!=' ')
			if(ch[0]!='\n')		
				strcat(word,ch);
		if(ch[0]==' ' || ch[0]=='\n')
		{
			if(strlen(word)>4)
			{
				count++;
			printf("%s\n",word);
			}
			memset(word,0,20*sizeof(char));
		}

	}
	printf("\nThe number of words whose length is >4 are %d",count);

	fclose(f);
}
int main()
{

	FILE *fp;
	char ch;

	system("clear");
	fp=fopen("words.txt","w");
	if(!fp)
	{
		printf("ERROR");
		return 0;
	}
	printf("\nEnter the strings:(press ctrl+D to exit)\n");
	fgetc(stdin);
	while((ch=fgetc(stdin))!=EOF)
	{
		fputc(ch,fp);
	}
	fclose(fp);
	display();
return 0;
}
