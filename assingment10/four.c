//programme to check the matrix is symetric or not
#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],num,flag,i,j;
	printf("Enter the size of square matrix(only applicable to square matrix):");
	scanf("%d",&num);
	 printf("Enter the elements:\n");
	for(i=0;i<num;i++)
                {
                        for(j=0;j<num;j++)
                                scanf("%d",&a[i][j]);
                }
	printf("The matrix is:\n");
	for(i=0;i<num;i++)
                {
                        for(j=0;j<num;j++)
                                printf("%d ",a[i][j]);
				printf("\n");
                }
	for(i=0;i<num;i++)
                {
                        for(j=0;j<num;j++)
                                b[i][j]=a[j][i];
                }
	for(i=0;i<num;i++)
                {
                        for(j=0;j<num;j++)
                                if(a[i][j]!=(b[i][j])){
					flag=1;
					break;}
                }
	if(flag!=1)
		printf("\nIt is symetric matrix");
	else
		printf("\nIt is not a symetric matrix");


return 0;
}
