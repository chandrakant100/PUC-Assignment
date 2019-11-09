//programme to print sine series
#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,i,fact=1,sign=1;
	float x,z,sum=0.0;
	printf("Enter the sine series in radian:");
	scanf("%f",&x);
	printf("\nEnter the terms:");
	scanf("%d",&m);
	for(n=0;n<=m;n++)
		{
		
			z=pow(x,((2*n)+1));
			for(i=((2*n)+1);i>=1;i--)
				fact*=i;
			sum+=sign*(z/fact);
			sign*=-1;
		}
	printf("\nThe sine series sum=%.4f",sum);

return 0;	
}
