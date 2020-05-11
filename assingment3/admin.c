/*programe:to find whether a candidate is eligible for admission or not.
*created by:chandrakant jena
*file name:admin.c
*date:
*/
#include<stdio.h>
int main()
{
	float phy,chem,math,total;
	printf("Enter your pcm marks respectively:");
	scanf("%f%f%f",&phy,&chem,&math);
	total=(phy+chem+math);
	if(math>=60 && phy>=50 && chem>=40)
		{
			if(total>=200 || (math+phy)>=150)
				printf("you are eligible for admission:");
		}
	else
		printf("you are not eligible for adimssion:");
return 0;
}
