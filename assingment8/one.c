//programme to copy content of one array to another in reverse order
#include<stdio.h>
int  main()
{
	int a[5],b[5],i,j=4;
	printf("Enter the ist array elements:\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\nThe ist array elements are:\n");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	for(i=0;i<5;i++)
		{
			b[i]=a[j];
			j--;
		}
	printf("\nThe elements in 2nd array in reverse order is:\n");
	for(i=0;i<5;i++)
		printf("%d ",b[i]);
return 0;
}
