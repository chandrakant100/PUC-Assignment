//programme to show no. of even numbers and odd numbers in an integer array
#include<stdio.h>
int main()
{
	int a[20],num,i,count1=0,count2=0;
	printf("Enter the number of elements want to insert(max 20):");
	scanf("%d",&num);
	printf("\nEnter the elements of the array:\n");
	for(i=0;i<num;i++)
		scanf("%d",&a[i]);
	printf("\nThe array elements are:\n");
	for(i=0;i<num;i++)
		printf("%d ",a[i]);
	i=0;
	while(i<num)
		{
			if(a[i]%2==0)
				count1++;
			else
				count2++;
			i++;
		}
	printf("\nThe number of even elements are:%d",count1);
	printf("\nThe number of odd elements are:%d",count2);

return 0;
	
}
