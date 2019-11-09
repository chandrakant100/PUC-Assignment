/*programme:To display a menu that will prnt triangle area
*created by:chandrakant jena
*file name:area.c
*date:
*/
#include<stdio.h>
int main()
{
	int c;
	float a,b,area;
	printf("Enter numbers for the following:\n");
	printf("press 1 for area of triangle\n press 2 for area of rectrangle\n press 3 for area of circle\n press 4 for area of square:\n");
	scanf("%d",&c);
	switch(c){
				
			case 1: printf("Enter the base and height of triangle respectively:\n");
				scanf("%f%f",&a,&b);
				area=(1/2.0)*a*b;
				printf("Area is =%.2f",area);
				break;
			case 2: printf("Enter the two side of rectrangle:\n");
				scanf("%f%f",&a,&b);
				area=a*b;
				printf("Area is =%.2f",area);
				break;
			case 3:printf("Enter the radius of circle:\n");
				scanf("%f",&a);
				area=3.14*(a*a);
				printf("Area is =%.2f",area);
				break;
			case 4:printf("Enter the side of square:\n");
				scanf("%f",&a);
				area=(a*a);
				printf("Area is =%.2f",area);
				break;
			default:
					printf("area is not included");
					break;
		 }
return 0;
}
