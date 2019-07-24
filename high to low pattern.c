#include<stdio.h>
main()
{
    int i=1,j=1;
   for(i=10;i>=1;i--)
    {
        for(j=1;j<=i;j++)//
        {
            printf("%4d",j);
        }
         printf("\n");
    }


      for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%4d",j);
        }
         printf("\n");
    }


    /*while(i!=10)
    {
        while(j!=i)
        {
            printf("%4d",j);
            j++;
        }
        printf("\n");
    i++;
    }*/



}
