//programm for input a student data and store it in a file
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
typedef struct student
{
	int roll;
	char name[100];
	long int cont_no;
	char add[100];
	char gen;
}e;
void insert(e *m,int num)
{
	FILE *fp;
	fp=fopen("student.dat","wb");
	int i;
	printf("\n---:ENTER THE FOLLWING DETAILS:\n");
	for(i=0;i<num;i++)
	{
		printf("----STUDENT %d----",i+1);
		printf("\nROLL:");
		scanf("%d",&(m+i)->roll);

		fgetc(stdin);
		printf("NAME:");
		scanf("%[^\n]",(m+i)->name);

		fgetc(stdin);
		printf("CONTACT NO:");
                scanf("%ld",&(m+i)->cont_no);

		fgetc(stdin);
		printf("ADDRESS:");
                scanf("%[^\n]",(m+i)->add);

		fgetc(stdin);
		printf("GENDER(M/F):");
                scanf("%c",&(m+i)->gen);
		
		printf("\n");
		fwrite((m+i),sizeof(m),1,fp);

	}
	fclose(fp);
}
void display(e *m,int num)
{
        int i;
	FILE *fp;
	fp=fopen("student.dat","rb");
        printf("\n:DISPLAYING THE FOLLWING DETAILS:\n");
        for(i=0;i<num;i++)
        {
		fread((m+i),sizeof(m),1,fp);
		printf("----STUDENT %d----",i+1);
                printf("\nROLL:");
                printf("%d",(m+i)->roll);

                printf("\nNAME:");
                puts((m+i)->name);

                printf("CONTACT NUMBER:");
                printf("%ld",(m+i)->cont_no);

                printf("\nADDRESS:");
                puts((m+i)->add);

                printf("GENDER:");
                printf("%c",(m+i)->gen);

                printf("\n");
	}
}
int main()
{
	int num;
	e s[100];

	system("clear");
	printf("\n\t---------------STUDENTS REGISTRATION-------------------\n");
	printf("Entre the no. of students:");
	scanf("%d",&num);
	insert(s,num);
	display(s,num);

return 0;
}
