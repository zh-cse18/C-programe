#include<stdio.h>
main()
{
    int a=12,b=34;
    float c;//=b/a;

    printf(" without casting %d/%d=%.2f",b,a,c=b/a);
    c=(float)b/a;
    printf(" \n casting first %d/%d=%.2f",b,a,c);
    c=b/(float)a;
    printf("\n  casting second %d/%d=%.2f",b,a,c);



}
