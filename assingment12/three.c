//programme for set difference
#include<stdio.h>
int main()
{
	int a[50],b[50],x,c[100];
	int num1,num2,i,j=0,m=0,k,count=0;
	printf("Enter the number of elements in set A:\n");
		scanf("%d",&num1);
	printf("\nEnter the number of elements in set B:\n");
		scanf("%d",&num2);

	printf("\nEnter the elements in set A:\n");
		for(i=0;i<num1;i++)
			scanf("%d",&a[i]);
	printf("\nEnter the elements in 2nd set B:\n");
		for(j=0;j<num2;j++)
			scanf("%d",&b[j]);
	
	printf("\nEnter for the following:\n1.A-B\n2.B-A\n\t");
	scanf("%d",&x);
	for(i=0;i<num1-count;i++)
	for(j=0;j<num2-count;j++)
		{
			if(a[i]==b[j])
				{
					k=i;
					while(k<=(num1+num2)-1)
						{	
							a[k]=a[k+1];
							k++;
						}
					k=0;
					k=j;
                                        while(k<=(num1+num2)-1)
                                              	{
							b[k]=b[k+1];
							k++;
						}
				count++;
				}

			}
			if(x==1){
		 		printf("\nA-B is :\n");
                                for(i=0;i<(num1-count);i++)
                                        printf("%d ",a[i]);
				}
			else{
				 printf("\nB-A is :\n");
                                for(i=0;i<(num2-count);i++)
                                        printf("%d ",b[i]);
				}

	
return 0;
}
