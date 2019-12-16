#include<stdio.h>
#include<string.h>
int main()
{

  char a[100],word[20],ch,ar[100];
  int i,m=0,j=0,count=0;
  printf("Enter the string:\n");
  scanf("%[^\n]",a);
  printf("\n");
        puts(a);
  printf("Enter the character want to deleteto delete:");
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
return 0;
}


