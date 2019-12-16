//programm for structure performance
#include<stdio.h>
#include<string.h>
typedef struct employee
{
	int emp_id;
	char emp_name[100];
	char dept_name[10];
	float b_sal;
}emp;
void sort1(emp *m,int num)
{

	int i,j,temp;
	emp s;
	printf("\n\tTo sort the records according to the emp-ID:\n");
		
	for(i=0;i<num-1;i++)
	for(j=0;j<num-1;j++)
	{
		if((m+j)->emp_id > (m+j+1)->emp_id)
		{
			s=*(m+j);
			*(m+j)=*(m+j+1);
			*(m+j+1)=s;
		}
	}
	  printf("\nAfter sorting:\n");
                for(i=0;i<num;i++)
        {
        	  printf("\nThe emp_id %d:",i+1);
                printf("%d",(m+i)->emp_id);
                printf("\nThe emp_name %d:",i+1);

                puts((m+i)->emp_name);
                printf("The dept_name %d:",i+1);

                puts((m+i)->dept_name);
                 printf("The bsal ofemp %d:",i+1);

                printf("%.2f",(m+i)->b_sal);
                printf("\n");
	}
}
void sort2(emp *m,int num)
{
	  int i,j,temp;
        emp s;
        printf("\n\tTo sort the records according to the emp-Name:\n");

        for(i=0;i<num-1;i++)
        for(j=0;j<num-1;j++)
        {
                if((m+j)->emp_name[0] > (m+j+1)->emp_name[0])
                {
                        s=*(m+j);
                        *(m+j)=*(m+j+1);
                        *(m+j+1)=s;
                }
        }
          printf("\nAfter sorting:\n");
                for(i=0;i<num;i++)
        {
                  printf("\nThe emp_id %d:",i+1);
                printf("%d",(m+i)->emp_id);
                printf("\nThe emp_name %d:",i+1);

                puts((m+i)->emp_name);
                printf("The dept_name %d:",i+1);

                puts((m+i)->dept_name);
                 printf("The bsal ofemp %d:",i+1);

                printf("%.2f",(m+i)->b_sal);
                printf("\n");
        }

}
void edit(emp *m,int num)
{
	printf("\n\tTo Edit basic salary of employees in finance department:\n");
	       int i;
        emp ar[100];
        for(i=0;i<num;i++)
                {
			(ar+i)->b_sal=(m+i)->b_sal*0.15+(m+i)->b_sal;
                        (ar+i)->emp_id=(m+i)->emp_id;
                        strcpy((ar+i)->emp_name,(m+i)->emp_name);
                        strcpy((ar+i)->dept_name,(m+i)->dept_name);
			if(strcmp((m+i)->dept_name,"finance")==0)
                        	(ar+i)->b_sal=(m+i)->b_sal*0.15+(m+i)->b_sal;
			else
				(ar+i)->b_sal=(m+i)->b_sal;

                }
        printf("\nAfter deletion of the record:\n");
                for(i=0;i<num;i++)
        {
          printf("\nThe emp_id %d:",i+1);
                printf("%d",(ar+i)->emp_id);
                printf("\nThe emp_name %d:",i+1);

                puts((ar+i)->emp_name);
                printf("The dept_name %d:",i+1);

                puts((ar+i)->dept_name);
                 printf("The bsal ofemp %d:",i+1);

                printf("%.2f",(ar+i)->b_sal);
                printf("\n");
        }	
}
void delete1(emp *m,int num)
{
	int i,n,count=0;
	emp ar[100];
	printf("\n\tTo search and delete the record having emp id:\n");
	printf("\nEntre the emp id to delete:\n");
	scanf("%d",&n);
	for(i=0;i<num;i++)
		{
		if((m+i)->emp_id!=n)
		{
			count++;
			(ar+i)->emp_id=(m+i)->emp_id;
			strcpy((ar+i)->emp_name,(m+i)->emp_name);
			strcpy((ar+i)->dept_name,(m+i)->dept_name);
			(ar+i)->b_sal=(m+i)->b_sal;
		}
	}
	printf("\nAfter deletion of the record:\n");
	        for(i=0;i<count;i++)
        {
          printf("\nThe emp_id %d:",i+1);
                printf("%d",(ar+i)->emp_id);
                printf("\nThe emp_name %d:",i+1);

                puts((ar+i)->emp_name);
           printf("The dept_name %d:",i+1);

                puts((ar+i)->dept_name);
                 printf("The bsal ofemp %d:",i+1);

                printf("%.2f",(ar+i)->b_sal);
                printf("\n");
        }


}
void delete2(emp *m,int num)
{
	        int i,count=0;
        emp ar[100];
        printf("\n\tTo search and delete the record having dep_name=sales:\n");
        for(i=0;i<num;i++)
                {
                if(strcmp((m+i)->dept_name,"sales"))
                {
                        count++;
                        (ar+i)->emp_id=(m+i)->emp_id;
                        strcpy((ar+i)->emp_name,(m+i)->emp_name);
                        strcpy((ar+i)->dept_name,(m+i)->dept_name);
                        (ar+i)->b_sal=(m+i)->b_sal;
                }
        }
        printf("\nAfter deletion of the record:\n");
               for(i=0;i<count;i++)
        {
          printf("\nThe emp_id %d:",i+1);
                printf("%d",(ar+i)->emp_id);
                printf("\nThe emp_name %d:",i+1);

                puts((ar+i)->emp_name);
                printf("The dept_name %d:",i+1);

                puts((ar+i)->dept_name);
                 printf("The bsal ofemp %d:",i+1);

                printf("%.2f",(ar+i)->b_sal);
                printf("\n");
        }

}
void display(emp *m,int num)
	{
	int i;
	printf("\n\tDisplaying all the input records:\n");
	for(i=0;i<num;i++)
	{
	  printf("\nThe emp_id %d:",i+1);
                printf("%d",(m+i)->emp_id);
                printf("The emp_name %d:",i+1);

                puts((m+i)->emp_name);       
                printf("The dept_name %d:",i+1);

                puts((m+i)->dept_name);
                 printf("The bsal ofemp %d:",i+1);

                printf("%.2f",(m+i)->b_sal);
		printf("\n");
	}
}
int main()
{
	int num,i;
	emp s[100];
	printf("Enter number of employes:\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\nEnter emp_id %d:",i+1);
		scanf("%d",&(s+i)->emp_id);

		fgetc(stdin);
		printf("Enter the emp_name %d:",i+1);
		scanf("%[^\n]",(s+i)->emp_name);

		fgetc(stdin);
		printf("Enter the dept_name %d:",i+1);
                scanf("%[^\n]",(s+i)->dept_name);

		 printf("Enter the bsal ofemp %d:",i+1);
                scanf("%f",&(s+i)->b_sal);
		printf("\n");
	}
	display(s,num);
	delete1(s,num);
	delete2(s,num);
	edit(s,num);
	sort1(s,num);
	sort2(s,num);
	return 0;
}
