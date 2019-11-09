//programme to count the pair of elements whose sum is greater than 20
#include<stdio.h>
int main()
{
	int a[10],i,j,num,count=0;
	printf("Enter the no. of elements you want to insert(max 10):");
	scanf("%d",&num);
	printf("\nEnter the elements:");

	for(i=0;i<num;i++)
		scanf("%d",&a[i]);
	for(i=0;i<num-1;i++)
	for(j=0;j<num-1;j++)
		{
			if(a[i]+a[i+1]>20)
				count++;
		}
	if(count>=1)
	printf("\nThe number of pairs are %d ",count);
	else
		printf("\nNo pair found");
return 0;
}
