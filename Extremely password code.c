
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{


     char pwrd[]="z77d";
     char temp1[25] , temp2[25] , uname[]="ziko1153" , ch;
     int i=0,l;
     //clrscr();
     printf("Enter the username: ");
     gets(temp1);
     printf("Enter the password: ");

     while(1)
     {
 ch=getch();
 if(ch==13)
         break;
 printf("*");
 temp2[i++]=ch;
     }
     temp2[i]='\0';
     if(!strcmp(uname,temp1)&&!strcmp(temp2,pwrd))
      { for(l=0;l<=100000;l++)
        {
            printf("\r\t'USBD' Loading %d",l/1000);
        }
          printf("\n\n\tWelcome To The ");
          printf("\n\n\t");
          printf("         UNITED STUDENTS OF BAGLADESH     \n");
          printf("\t\t------------------------------");
          printf("\n\n\t          Designed By..... TAHMID ZIKO");




          printf("\n\n\n");





      }


     else
  printf("\nThe user name or password you have entered is invalid.\n\n");
}
