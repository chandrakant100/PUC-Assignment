//programm to find 2nd largest and second smallest element in an array
#include<stdio.h>
int main()
{
	int a[10],i,j,num,temp;
	printf("Enter the number of elements want to insert(max 10):");
	scanf("%d",&num);
	printf("\nEnter the elements:")	;
	for(i=0;i<num;i++)
		scanf("%d",&a[i]);
	for(i=0;i<num-1;i++)
	for(j=0;j<num-1;j++)
		{
			if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
		}
	printf("\nThe second smallest element is %d ",a[1]);
	printf("\nThe second largest element is %d ",a[num-2]);
return 0;
}
