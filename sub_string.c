#include<stdio.h>
int length(char str[]);
void substring(char str[],int initial,int length);
main()
{
    char sr[200];
    int count,i,l;
    printf("Enter The main string :");
    gets(sr);
    count=length(sr);
    printf("\ntotal charecter in string %d \n\nEnter position and length :",count);
    scanf(" %d %d",&i,&l);
    substring(sr,i-1,l-1);
}
int length(char str[])
{
    int gtr=0;
    while(str[gtr]!='\0')
    {
        gtr++;
    }
    return gtr;
}
void substring(char str[],int initial,int length)
{   int i;
    for(i=initial;i<=initial+length;i++)
    {
        printf("%c",str[i]);
    }
}
