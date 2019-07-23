#include<stdio.h>
#include<stdlib.h>
main()
{
    system("COLOR b0");
    char a;
    int b,c;
    for(a='a',c=1,b=53; b<=79,c<=26,a<='z';b++,a++,c++)
    {
        printf("\n%d). %c=%d",c,a,b);
    }
    //printf("\n %c=%d",a,b);
}
