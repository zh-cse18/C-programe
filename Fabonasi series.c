#include<stdio.h>
main()
{
    int f0=0,f1=2,f,i,k,N;
    float avg=0;

    printf("Enter your desirable number=");
    scanf("%d",&N);
    printf("\nThe %d fabonasi series is=",N);
    for(k=1;k<=N;k++)
    {
        f=f0+f1;
        printf("%5d",f);
        f1=f0;
        f0=f;

    }
}

