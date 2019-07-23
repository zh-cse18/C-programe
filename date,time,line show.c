#include<stdio.h>
#include<conio.h>
main()
{
    printf("\nCurrent date is=%s",__DATE__);
    printf("\n Current time is=%s",__TIME__);
    printf("\n Running File name is=%s",__FILE__);
    printf("\n Number of lines is=%d",__LINE__);
        printf("\n IS it approved by ANSI if ans 1 then true is=%d",__STDC__);
    getch();
    //return 0;
}
