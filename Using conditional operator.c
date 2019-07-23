#include<stdio.h>
main()
{
    int a,b;
    printf("Enter the value of a and b=\n");
    scanf("%d %d",&a,&b);
    int c=(a>b)?a:b;
    //c=(a>b)?a:b;
    printf("max between %d and %d is =%d",a,b,c);
}
