//programme to print the left diagonal of the matrix
#include<stdio.h>
int main()
{
	int a[100][100],num,i,j;
	printf("Enter the size of the square matrix(only applicable to square matrix):");
	scanf("%d",&num);
	for(i=0;i<num;i++)
                {
                        for(j=0;j<num;j++)
                                scanf("%d",&a[i][j]);
                }
	printf("The array is:\n");
	for(i=0;i<num;i++)
                {
                        for(j=0;j<num;j++)
                                printf("%d ",a[i][j]);
				printf("\n");
                }
	printf("The left diagonal is:\n");
	for(i=0;i<num;i++)
                {
                        for(j=0;j<num;j++)
				if(i==j)
				{
                                printf("%d",a[i][j]);
				printf("\n");
				}
                }

return 0;
}
