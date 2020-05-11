/*programme: to show the invoice report:
*created by:chandraknt jena
*file name:invoice.c
*date:
*/
#include<stdio.h>
int main(){
	float milcloth,handloom,totalamount,mildis,handdis;
	printf("\nEnter the mill cloth amount:");
	scanf("%f",&milcloth);
	printf("\nEnter the handloom amount:");
	scanf("%f",&handloom);
	printf("\n\n\t\t\t INVOICE");
	totalamount=milcloth+handloom;
	printf("\nAMOUNT\t\t\t\t\tPRICE");
	printf("\nTotal amount\t\t\t\t%.2f\n",totalamount);
	if(totalamount>0 && totalamount<100)
		{
			mildis=0;
			handdis=0;
			printf("\nGiven milcloth amount:\t\t\t%.2f",milcloth);
			printf("\nGiven handloom amount:\t\t\t%.2f\n",handloom);
			printf("\nMilcloth discount:\t\t\t%.2f",mildis);
			printf("\nHandloom discount:\t\t\t%.2f\n",handdis);
			milcloth-=milcloth*(mildis/100);
			handloom-=handloom*(handdis/100);
			totalamount=milcloth+handloom;
		}
	else if(totalamount>=101 && totalamount<=200)
		{
		        mildis=5.0;
                        handdis=7.5;
                        printf("\nGiven milcloth amount:\t\t\t%.2f",milcloth);
                        printf("\nGiven handloom amount:\t\t\t%.2f\n",handloom);
			printf("\nMilcloth discount:\t\t\t%.2f",mildis);
                        printf("\nHandloom discount:\t\t\t%.2f\n",handdis);
                        milcloth-=milcloth*(mildis/100);
                        handloom-=handloom*(handdis/100);
                        totalamount=milcloth+handloom;
 		}

	else if(totalamount>=201 && totalamount<=300)
                {
                        mildis=7.5;
                        handdis=10.0;
                        printf("\nGiven milcloth amount:\t\t\t%.2f",milcloth);
                        printf("\nGiven handloom amount:\t\t\t%.2f\n",handloom);
			printf("\nMilcloth discount:\t\t\t%.2f",mildis);
                        printf("\nHandloom discount:\t\t\t%.2f\n",handdis);
                        milcloth-=milcloth*(mildis/100);
                        handloom-=handloom*(handdis/100);
                        totalamount=milcloth+handloom;
		}		
		else	{				

			 mildis=10.0;
                        handdis=15.0;
                        printf("\nGiven milcloth amount:\t\t\t%.2f",milcloth);
                        printf("\nGiven handloom amount:\t\t\t%.2f\n",handloom);
			printf("\nMilcloth discount:\t\t\t%.2f",mildis);
                        printf("\nHandloom discount:\t\t\t%.2f\n",handdis);
                        milcloth-=milcloth*(mildis/100);
                        handloom-=handloom*(handdis/100);
                        totalamount=milcloth+handloom;

		}
			printf("\nTotal amount after dicount:\t\t%.2f",totalamount);
                        printf("\n\t\t\tHAPPY SHOPPING");

return 0;
}



