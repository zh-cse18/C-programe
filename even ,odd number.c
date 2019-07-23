#include<stdio.h>
main()
{
    int i;
    printf("   Odd num\tEven num\n");
    for(i=0;i<=20;i++)
    {
        if(i%2==0)
        {
            printf("%9d\n",i);
        }
        if(i%2==1)
        {
            printf("%9d",i);
        }
    }
}

