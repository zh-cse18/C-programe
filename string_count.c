#include<stdio.h>
int length(char sr[]);
main()
{
    char sr[200];
    int count;
    gets(sr);
    count=length(sr);
    printf("%d",count);
}
int length(char sr[])
{
    int gtr=0;
    while(sr[gtr]!='\0')
    {
        gtr++;
    }
    return gtr;
   //printf("%d",gtr);
}
