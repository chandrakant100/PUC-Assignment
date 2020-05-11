//programme to store even numbers in 2nd array in odd numbers in third array
#include<stdio.h>
int main()
{
	int a[20],b[20],c[20],num,i,j=0,z=0,count1=0,count2=0;
	printf("Enter the the number of elements you want to insert:");
	scanf("%d",&num);
	printf("\nEnter the elements of the array:\n");
	for(i=0;i<num;i++)
 		scanf("%d",&a[i]);
	printf("\nThe elements of the array are:\n");
	for(i=0;i<num;i++)
		printf("%d ",a[i]);
	i=0;
	while(i<num)
		{
			if(a[i]%2==0){
				b[j]=a[i];
				count1+=1;
				j++;
				}
			else
				{
				c[z]=a[i];
				count2+=1;
				z++;
				}
			i++;
		}
	printf("\nThe even elements are:\n");
	for(i=0;i<count1;i++)
		printf("%d ",b[i]);
	printf("\nThe odd elements are:\n");
	for(i=0;i<count2;i++)
		printf("%d ",c[i]);

return 0;

} 
