//programme to print cos series
#include<stdio.h>
#include<math.h>
int main()
{
	float sum=1.0,num,y,z;
	int n,m,i,fact=1;
	printf("Enter the cos series in radian:");
	scanf("%f",&num);
	printf("\nEnter the terms:");
	scanf("%d",&m);
	for(n=1;n<=m;n++)
		{
			y=pow(-1,n);
			z=pow(num,(2*n));
			for(i=(2*n);i>=1;i--)
				fact*=i;
			sum+=y*(z/fact);
		}
	printf("The sum of cos series is=%f",sum);
return 0;
}
