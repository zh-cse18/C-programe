#include <windows.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{


     char pwrd[]="z77d";
     char temp1[25] , temp2[25] , uname[]="ziko1153" , ch;
     int i=0,l;
     //clrscr();

     SetConsoleTextAttribute(  GetStdHandle( STD_OUTPUT_HANDLE ), FOREGROUND_GREEN );
          printf("\n\n\t");
          printf("         UNITED STUDENTS OF BAGLADESH     \n");
          printf("\t\t------------------------------");
     printf("\n\n\t\tEnter the username: ");
     gets(temp1);
     printf("\t\tEnter the password: ");
     SetConsoleTextAttribute(  GetStdHandle( STD_OUTPUT_HANDLE ), 0x120 );


     while(1)
     {
 ch=getch();
 if(ch==13)
         break;
 printf("*");
 temp2[i++]=ch;
     }
     temp2[i]='\0';
     system("cls");
 system("COLOR A0");
     if(!strcmp(uname,temp1)&&!strcmp(temp2,pwrd))

      { for(l=0;l<=100000;l++)
        {
            printf("\r\t                   'USBD' Loading %d",               l/1000);
        }
          system("cls");
          system("COLOR F");
          printf("\n\n\t");
          printf("\t\tWelcome To Our Organization");
          printf("\n\t\t      ------------------------------");
          printf(" \n \n\n\t                You Have Successfully Logged IN    \n");

          printf("\n\n\t\t         Designed By..... TAHMID ZIKO");




          printf("\n\n\n");





      }


     else

  printf("\n\t\t\tSORRY!!!!\n\t\tThe User Name Or Password You Have Entered Is Invalid.\n\n");

  getch ();
}
