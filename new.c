
#include<stdio.h>
main()
{

    int a,b,c,day=1543,month,year,week,calculation;


    year=day/360;
    b=day%365;
    month=b/30;
    c=b%30;
    day=c%7;
  printf("\n%d ano(s)\n%d mes(es)\n%d dia(s)",year,month,day);


}
