#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main()
{
    FILE *fp, *ft;
    char another, choice,response;
    int found;
    int coun;
     char dept[10];
     char field[10];
    struct stu
    {
	char name[40];
	int age;
	char dept[30];
	char sex[20];
	int id;
	char semester[50];
	int year;
	char phone[50];

	};

    struct stu s;
    char stuname[40];
    int stuage;
    char studept[30];
    char stusex[20];
    int stuid;
    char stusemester;
    int stuyear;
    char stuphone[50];

    long int recsize;


    fp = fopen("STU.DAT","rb+");
    if(fp == NULL){
	fp = fopen("STU.DAT","wb+");
	if(fp == NULL){
	    printf("Connot open file");
	    exit(1);

}
    }


    recsize = sizeof(s);


    do{
            system("color c0");
        printf ("\n");
        printf ("\t\tNORTH WESTERN UNIVERSITY\n");
    printf("\n\n                Student Information System\n");
    printf ("\                --------------------------\n");
    printf("\n\n \t\t\tMAIN MANU:\n");
    printf ("\t\t\t---------\n\n");
	printf(" 1. Enter New Student Information\n\n");
	printf(" 2. List Of The Student\n\n");
	printf(" 3. Modify The Information\n\n");
	printf(" 4. Delete The Information\n\n");
	printf(" 5. Search For The Student's Information\n\n");
	printf(" 6. Exit The Manu\n\n");
		printf("# Enter Your Choice: \n"  );
	fflush(stdin);
	choice  = getche();
	switch(choice){

	    case '1':

		fseek(fp,0,SEEK_END);


		another = 'y';
		while(another == 'y'){
		    printf("\n\tEnter name: ");
		    scanf("%s",s.name);
		    printf("\n\tEnter age: ");
		    scanf("%d", &s.age);
		    printf("\n\tEnter dept:");
		    scanf("%s",&s.dept);
		    printf("\n\tEnter sex:");
		    scanf("%s",&s.sex);
		    printf("\n\tEnter id:");
		    scanf("%d",&s.id);
		    printf("\n\tEnter semester:");
		    scanf("%s",&s.semester);
		    printf("\n\tEnter year:");
		    scanf("%d",&s.year);
		    printf("\n\tEnter phone:");
		    scanf("%s",&s.phone);


		    fwrite(&s,recsize,1,fp);

		    printf("\nEnter another new student information(y/n) ");
		    fflush(stdin);
		    another = getche();
		}
		break;
	    case '2':
        // coun=0;
         printf("\n#  enter the dept u want to search:");
         found=0;
         scanf("%s",&dept);
		rewind(fp);
            printf(" \t\nNAME\tAGE\tDEPT\tSEX\tID\tSEMESTER\tYEAR\tPHONE\n");
          printf("  \n---------------------------------------------------------------------\n");
		while( fread(&s,recsize,1,fp)==1){


           if(strcmp(s.dept,dept)==0)
          {
         if(found=0)
         printf(" \t\nNAME\tAGE\tDEPT\tSEX\tID\tSEMESTER\tYEAR\tPHONE\n");
		 printf("  \t\n%s\t%d\t%s\t%s\t%d\t%s\t\t%d\t%s\n",s.name,s.age,s.dept,s.sex,s.id,s.semester,s.year,s.phone);
		 found=1;
		// coun++;
          }
		//if(coun%20==0)
             // getch();


        }
        if(found==0)
        printf("\nno data found");
		getch();
		break;


	    case '3':
		another = 'y';
		found=0;


		while(another == 'y'){
		    printf("\nEnter the student phone to modify: ");
		    scanf("%s", stuphone);


		    rewind(fp);
		    while(fread(&s,recsize,1,fp)==1){
			if(strcmp(s.phone,stuphone) == 0){
                printf("NAME\tAGE\tDEPT\tSEX\tID\tSEMESTER\tYEAR\tPHONE\t");
			    printf(" \n%s \t%d \t%s \t%s \t%d \t%s  \t%d  \t%s ",s.name,s.age,s.dept,s.sex,s.id,s.semester,s.year,s.phone);
			    printf("\ndo u want to modify name? (y/n):");
			    response=getche();
			    if (response=='y'){
				printf("\nEnter new name:");
				scanf("%s",s.name);
			    }
			    printf("\ndo u want to modify age? (y/n):");
			    response=getche();
			    if (response=='y'){
				printf("\nEnter new age:");
				scanf("%d",&s.age);
			    }
			    printf("\ndo u want to modify dept? (y/n):");
			    response=getche();
			    if (response=='y'){
				printf("\nEnter new dept:");
				scanf("%s",s.dept);
			    }
			    printf("\ndo u want to modify sex? (y/n):");
			    response=getche();
			    if (response=='y'){
				printf("\nEnter new sex:");
				scanf("%s",s.sex);
			    }
			    printf("\ndo u want to modify id? (y/n):");
			    response=getche();
			    if (response=='y'){
				printf("\nEnter new id:");
				scanf("%s",&s.id);
			    }
                 printf("\ndo u want to modify semester? (y/n):");
			    response=getche();
			    if (response=='y'){
				printf("\nEnter new semester:");
				scanf("%s",s.semester);
			    }
			     printf("\ndo u want to modify year? (y/n):");
			    response=getche();
			    if (response=='y'){
				printf("\nEnter new year:");
				scanf("%s",s.year);
			    }
			    printf("\ndo u want to modify phone? (y/n):");
			    response=getche();
			    if (response=='y'){
				printf("\nEnter new phone:");
				scanf("%s",s.phone);
			    }

			    //scanf("%s%d%s%s%d%s%d%s",&s.name,&s.age,&s.dept,&s.sex,&s.id,&s.semester,&s.year,&s.phone);

			     fseek(fp,-recsize,SEEK_CUR);
			    fwrite(&s,recsize,1,fp);
			    found=1;
			    break;
			}
		    }
		    if (!found)
			printf("\n\nRecord not found");
		   printf("\nModify another record(y/n)");

		  another = getche();
		}


		break;
	    case '4':
		another = 'y';
		while(another == 'y'){
		    found=0;
		    printf("\nEnter phone of student to delete: ");
		    scanf("%s",stuphone);
		    ft = fopen("Temp.dat","wb");
		    rewind(fp);
		    while(fread(&s,recsize,1,fp) == 1){
			if (strcmp(s.phone,stuphone)==0)
				found=1;
			if(strcmp(s.phone,stuphone) != 0){
			    fwrite(&s,recsize,1,ft);
			}
		    }
		    fclose(fp);
		    fclose(ft);
		    remove("STU.DAT");
		    rename("Temp.dat","STU.DAT");
		    fp = fopen("STU.DAT", "rb+");
		    if (!found)
			printf("\nRecord not found\n");
		    printf("Delete another record(y/n)");
		    another = getche();
		}
		break;
	     case '5':
		another = 'y';
		while(another == 'y'){
		    found=0;
		    printf("\nEnter the student phone to search: ");
		    scanf("%s", stuphone);
		    rewind(fp);
		    while(fread(&s,recsize,1,fp)==1){
			if(strcmp(s.phone,stuphone) == 0){
                printf("\nNAME\tAGE\tDEPT\tSEX\tID\tSEMESTER\tYEAR\tPHONE");
			    printf("\n%s\t%d\t%s\t%s\t%d\t%s \t\t%d \t\t%s",s.name,s.age,s.dept,s.sex,s.id,s.semester,s.year,s.phone);
			    found=1;
			    break;
			}
		    }
		    if (!found)
			printf("\n\nRecord not found");
		    printf("\nSearch another record(y/n)");
		    fflush(stdin);
		    another = getche();
		}
		break;

	}
    }while(choice!='6');
    fclose(fp);
    return 0;
}
