//To print the lower triangle of an 2d array
#include<stdio.h>
int main()
{
	int a[100][100];
	int num,i,j;
	printf("Enter the size of the square matrix(only applicable to square matrix):");
	scanf("%d",&num);
	for(i=0;i<num;i++)
		{
			for(j=0;j<num;j++)
				scanf("%d",&a[i][j]);
		}
	printf("\nThe array is:\n");
	for(i=0;i<num;i++)
                {
                        for(j=0;j<num;j++)
                                printf("%d ",a[i][j]);
				printf("\n");
                }

	printf("The lower triangle of the array is:\n");
	for(i=0;i<num;i++)
		{
			for(j=0;j<=i;j++)
				printf("%d ",a[i][j]);
				printf("\n");
		}
return 0;
}
