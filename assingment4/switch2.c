/*progamme:.progrmme to print as vowel or consonant using switch
*created by:chnadraknat jena
*file name:switch2.c
*date:
*/
#include<stdio.h>
int main()
{
	char a;
	printf("Enter any key:");
	scanf("%c",&a);
	if((a>='A' && a<='Z')||(a>='a' && a<='z'))
		{
			printf("Its an alphabet:\n");
			switch(a){
					case 'A':printf("Its a vowel");
							break;	                         
					 case 'a':printf("Its a vowel");
                                                break;
                                        case 'E':printf("Its a vowel");
                                                break;
                                        case 'e':printf("Its a vowel");
                                                break;
                                        case 'I':printf("Its a vowel");
                                                break;
                                        case 'i':printf("Its a vowel");
                                                break;
                                        case 'O':printf("Its a vowel");
                                                break;
                                        case 'o':printf("Its a vowel");
                                                break;
                                        case 'U':printf("Its a vowel");
                                                break;
                                        case 'u':printf("Its a vowel");
                                                break;
					default: printf("Its a consonant");
						break;
			}}
	else
		printf("Its not alphabet");
return 0;
}
