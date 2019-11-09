//programme to search a key element in an array and its number of appearence in that 
#include<stdio.h>
int main()
{
	int a[10],num,x,i,count=0;
	printf("Enter the number of elements(max 10):");
	scanf("%d",&num);
	printf("\nEnter the elements :\n");
	for(i=0;i<num;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to searched");
	scanf("%d",&x);
	for(i=0;i<num;i++)
		{
			if(x==a[i])
				count++;
		}
	printf("The number is=%d",x);
	if(count>=1)
	        printf("\nIt is present %d times",count);
	else
		printf("\nThe element is not present:");
return 0;
}
