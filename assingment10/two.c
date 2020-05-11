//Two print the right diagonal
#include<stdio.h>
int main()
{
	int a[100][100];
	int num,i,j;
	printf("Enter the size of the square matrix(only applicable to square matrix):");
	scanf("%d",&num);
	printf("Enter the elements:\n");
	for(i=0;i<num;i++)
                {
                        for(j=0;j<num;j++)
                                scanf("%d",&a[i][j]);
                }
	printf("\nThe elements of the array is:\n");
	for(i=0;i<num;i++)
                {
                        for(j=0;j<num;j++)
                                printf("%d ",a[i][j]);
				printf("\n");
                }
	printf("\nThe right diagonal of the matrix is:\n");
	for(i=0;i<num;i++)
                {
                        for(j=0;j<num;j++)
                                if((i+j)==(num-1)){
					printf("%d",a[i][j]);
					printf("\n");
						}
                }



return 0;
}
