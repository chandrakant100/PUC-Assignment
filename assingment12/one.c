//programme for set intersection
#include<stdio.h>
int main()
{
	int a[100],b[100],c[100],num1,m=0,num2,i,j;
	printf("Enter the number of elements want to insert in set A:\n");
	scanf("%d",&num1);
	printf("\nEnter the number of elements want to insert in set B:\n");
	scanf("%d",&num2);

	 printf("\nEnter the elements in set A:\n");
		for(i=0;i<num1;i++)
			scanf("%d",&a[i]);
	 printf("\nEnter the elements in set B:\n");
		for(i=0;i<num2;i++)
			scanf("%d",&b[i]);
	
	for(i=0;i<num1;i++)
	for(j=0;j<num2;j++)
		{
			if(a[i]==b[j])
				c[m++]=b[j];
		}
		printf("\nThe intersection of the two set is:\n");
		for(i=0;i<m;i++)
			printf("%d ",c[i]);
return 0;
}
