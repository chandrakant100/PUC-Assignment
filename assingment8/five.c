//programme to print the number in word
#include<stdio.h>
int main()
{
	int num[20],n,x,i=0,j,temp,count=0;
	start:
	printf("\nEnter the number:");
	scanf("%d",&n);
	x=n;
	while(x){	
			count++;
			x/=10;
		}
	if(count>10){
		printf("\nEnter number again (out of bonds)");
		goto start;
		}
	else
	{
	count=0;
	while(n)
		{
			temp=n%10;
			num[i++]=temp;
			n/=10;
			
		}
	for(j=i-1; j>=0; j--)
	{
				switch(num[j])
				{
					case 0:
						printf(" zero");
						break;
					case 1:
						printf(" one");
						break;
					case 2:
                                                printf(" two"); 
						break;
					case 3:
                                                printf(" three");
						break; 
					case 4:
                                                printf(" four"); 
						break;
					case 5:
                                                printf(" five"); 
						break;
					case 6:
                                                printf(" six"); 
						break;
					case 7:
                                                printf(" seven"); 
						break;
					case 8:		
                                                printf(" eight"); 
						break;
					case 9:
                                                printf(" nine"); 
						break;
					default:
						printf("ERROR");
				}
		
		}}
return 0;
}
