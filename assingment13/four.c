//TO PRINT
//I
//I N
//I N D
//I N D I
//I N D I A
#include<stdio.h>
int main()
{
	char word[5]={'I','N','D','I','A'};
	int i,j;
	for(i=0;i<5;i++)
		{
		for(j=0;j<=i;j++)
			printf("%c ",word[j]);
			printf("\n");
		}
return 0;
}

