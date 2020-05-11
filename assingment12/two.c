//programme for set union
#include<stdio.h>
int main()
{
	int a[50],b[50],c[100];
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
	 for(i=0;i<num1;i++)
		c[m++]=a[i];
		j=0;
	 for(i=m;i<(num1+num2);i++)
		c[i]=b[j++];
	 for(i=0;i<(num1+num2)-count;i++)
	 for(j=0;j<(num1+num2)-count;j++)
		{
			if(i!=j){
			if(c[i]==c[j])
				{
					k=j;
					while(k<(num1+num2)){
						c[k]=c[k+1];
						k++;
							}
					count++;
				}
			
				}
		}
	 printf("\nThe union of the two sets is:\n");
	 for(i=0;i<(num1+num2)-count;i++)
		printf("%d ",c[i]);

	
return 0;
}
