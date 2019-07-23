#include<stdio.h>
main()
{
    int i,j;
    printf("j=");
    scanf("%d",&j);
    for(i=2;i<=j;i++)
    {
        if(i%2==0)
        printf("%4d",i);


    }
    printf("\n");

    for(i=2;i<=j;i++)
    if(i%3==0)
        printf("%4d",i);
}
