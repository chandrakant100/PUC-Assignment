//programm to input a string and perform following tasks using call by reference
#include<stdio.h>
#include<string.h>
void count(char *str)
{
	char ch,word[20];
	int i,k,j=0,m=0,count=0;
	printf("\n\tTo print number of words containing specific character at any position:\n");
	fgetc(stdin);
	printf("\nEntre the character to search:");
	scanf("%c",&ch);
	  start:
  for(i=j;*(str+i)!=' ';i++)
    {
      if(*(str+i)=='\0')
        break;
      else
        word[m++]=*(str+i);
    }
    word[m]='\0';
  if(*(str+i)==' ')
    {
	for(k=0;k<m;k++)
		if(*(word+k)==ch){
			count++;
			break;
		}
      j=i+1;
      m=0;
      goto start;

    }
  else if(*(str+i)=='\0')
    {
         for(k=0;k<m;k++)
		 if(*(word+k)==ch){
			 count++;
			 break;
		 }
      goto end;
    }
  end:
    printf("\nNo. of words having %c are %d",ch,count);


}
void insert(char *str)
{
	char word[20],st[100];
	int i,m=0;
	strcpy(st,str);
	printf("\n\tInsert a word into existing string:\n");
	fgetc(stdin);
	printf("Enter the word:\n");
	scanf("%s",word);
	
	strcat(st," ");
	strcat(st,word);
	printf("\nAfter insertion:\n");
	    puts(st);
	
}
void last(char *s)
{
	char a[100],word[20];
	int i,j=0,m=0;
	strcpy(a,s);
	printf("\n\tTo print the last word of the string:\n");
	  start:
  for(i=j;a[i]!=' ';i++)
    {
      if(a[i]=='\0')
        break;
      else
        word[m++]=a[i];
    }
    word[m]='\0';
  if(a[i]==' ')
    {
      j=i+1;
      m=0;
      goto start;

    }
  else if(a[i]=='\0')
    {
      goto end;
    }
  end:
    fgetc(stdout);
    printf("\nThe last word of the string is :\n");
    for(i=0;i<strlen(word);i++)
        printf("%c",word[i]);

}
void specific(char *s)
{
	  char a[100],word[20],ch,ar[100];
	  strcpy(a,s);
	  printf("\n\tTo remove the word having specific character:");
  int i,m=0,j=0,count=0;
  printf("\nEnter the character want to delete to delete:");
  fgetc(stdin); //to remove input buffer
  scanf("%c",&ch);

  start:
  for(i=j;a[i]!=' ';i++)
    {
      if(a[i]=='\0')
        break;
      else
        word[m++]=a[i];
    }
    word[m]='\0';
  if(a[i]==' ')
    {
     if(word[0]!=ch)
      {
        strcat(ar,word);
        strcat(ar," ");
        }
      j=i+1;
      m=0;
      goto start;

    }
  else if(a[i]=='\0')
    {
         if(word[0]!=ch)
      {
        strcat(ar,word);
        strcat(ar," ");
        }
      goto end;
    }
  end:
    fgetc(stdout);
    for(i=0;i<strlen(ar);i++)
        printf("%c",ar[i]);

}
void concadinate(char *s)
{
	char ar[100];
	int i,m=0;
	printf("\n\tTo concadinate two strings:\n");
	printf("\nEnter the string:\n");
	fgetc(stdin);
	scanf("%[^\n]",ar);
	strcat(ar," ");
	strcat(ar,s);
	printf("\nAfter concadination:\n");
	puts(ar);
}
int main()
{
	char str[100];
	printf("Enter the string:\n");
	scanf("%[^\n]",str);
	count(str);
	insert(str);
	last(str);
	specific(str);
	concadinate(str);	
}
