//proramme to find the percentage secured by the student and find the top three percentage
#include<stdio.h>
int main()
{
	int a[30][4],temp,per[30]={0},num,i,j,sum=0;
	printf("Enter the number of students:");
	scanf("%d",&num);
	printf("\nEnter the marks of 4 subjects:");
	for(i=0;i<num;i++)
	for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);			
		}
	
	for(i=0;i<num;i++){
			for(j=0;j<4;j++)
			per[i]+=a[i][j];
			per[i]=(float)(per[i]/400)*100;
		}
	for(i=0;i<num-1;i++)
        for(j=0;j<3;j++)
		{
			if(per[i]<per[i+1]){
			temp=per[i];
			per[i]=per[i+1];
			per[i+1]=temp;
			}
		}
	for(i=0;i<num;i++)
        	printf("\nTop three percentage are:%d %d %d",per[0],per[1],per[2]);

	
return 0;	
}
