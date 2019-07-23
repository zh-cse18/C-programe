#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter any integer number::::");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            printf("\n %d is not a prime number.\nBecause %d can be divided by\n",n,n);
              for(j=2;j<=n-1;j++)
              {if(n%j==0)
                 printf("\n%d",j);
              }

                break;
        }
    }
    if(i==n)
    {
          printf("\n %d is  a prime number",n);

    }
    getch();
}
