//programm to find biggest and smallest in an array
#include<stdio.h>
int main()
{
	int a[100],num,i,max,min;
	printf("Enter the number of elements:");
	scanf("%d",&num);
	printf("\nEnter the elments:\n");
	for(i=0;i<num;i++)
		scanf("%d",&a[i]);
	max=a[0];
	
	printf("\nThe array is:\n");
	 for(i=0;i<num;i++)
		printf("%d ",a[i]);

	for(i=1;i<num;i++)
		{
			if(a[i]>max)
				max=a[i];
		}
	printf("\nThe biggest number is : %d",max);
	
	min=a[0];
	
	for(i=1;i<num;i++)
                {
                        if(a[i]<min)
                                min=a[i];
                }
        printf("\nThe smsllest  number is : %d",min);

return 0;
}
