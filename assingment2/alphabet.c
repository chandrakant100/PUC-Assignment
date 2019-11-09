/*programme:To check entered character is aplhabet or not.
*created by:chandrakant jena
*file name:alphabet.c
*date:
*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character:");
	scanf("%c",&ch);
	if(ch=='A' || ch=='a'||ch=='E'|| ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
		printf("The character is vowel:%c",ch);
	else if((ch>='A' && ch<='z') || (ch>='a' && ch>='z'))
		printf("The character is a consonat:");
	else
		printf("The character is not a alphaet:");
return 0;
}
