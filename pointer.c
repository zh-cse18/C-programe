# include<stdio.h>
#include<conio.h>
main()
{
    int x=5,y=15,*xptr,*yptr;
    xptr=&x;
    yptr=&y;
    printf("\n Xptr=%x\nyptr=%x",xptr,yptr);
    printf("\n x=%x,\n y=%x",&x,&y);
 printf("\n x=%d,\n y=%d",x,y);
}
