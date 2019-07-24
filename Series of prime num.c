#include<stdio.h>
main()
{
    int i,j,n;
    printf("Enter the highest range== ");
    scanf("%d",&n);
    printf("\n Series of prime num upto %d is==",n);


    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }

        if(i==j)
        {
            printf("%4d",i);
        }
    }
}
