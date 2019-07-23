#include<stdio.h>
main()
{
    int i,a;
    printf("Enter any number::::");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%3==0)
        //break;
            printf("\n %d",i);
                       continue;


    }

}
