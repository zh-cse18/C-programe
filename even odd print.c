#include<stdio.h>
main()
{
    int i,j,k;
    printf("Enter any number that you want to see");
    scanf("%d",&k);
    printf("\n  \todd     \t Even\n");
    printf("\t=====\t\t======\n");
    for(i=1;i<=k;i++)
    {
          if(i%2==0)
            printf("\t\t%5d\n",i);
        if(i%2!=0)
            printf("\t%d",i);
    }
}
