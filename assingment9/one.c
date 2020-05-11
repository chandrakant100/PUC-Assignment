//programm to insert a number after a given  number
#include<stdio.h>
int main()
{
	int a[10],i,num,count=0;
	printf("Enter the number of elements of the array(less than 10):");
	scanf("%d",&num);
	printf("\nEnter the elements of the array:\n");
	for(i=0;i<num;i++)
		{
		scanf("%d",&a[i]);
		count++;
		}
	printf("\nEnter the number want to insert:");
	scanf("%d",&num);
	a[count]=num;
	printf("\nThe elements are:\n");
	for(i=0;i<count+1;i++)
		printf("%d ",a[i]);
		
return 0;
}
