#include<stdio.h>
main()
{
    int a,b;
    zahid:
        printf("a ,b=");
        scanf("%d%d",&a,&b);
        if(a<b)
            goto zahid;
            else
                printf("\n a is greater than b");
}
