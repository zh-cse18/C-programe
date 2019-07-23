#include<stdio.h>
//int length(char sr[]);
main()
{
    char sr[200];
    int count;


    printf("Enter any word or sentence\n");
    gets(sr);
    count=length(sr);
    printf(" \nYou have enter %d character",count);
}
int length(char sr[])
{



    int i,count;
    for(i=0;i<=200;i++)
    {
        if(sr[i]=='o')
        {count =i;
        break;
        return count;

        }
    }
   //printf("%d",gtr);
}
