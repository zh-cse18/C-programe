#include<stdio.h>
main()
{
    system("color b9");
    int a,b,c,day,month,year,week,calculation;
    printf("\n Day=");
    scanf("%d",&day);
    year=day/360;
    b=day%365;
    month=b/30;
    c=b%30;
    week=c/7;
    day=c%7;
    calculation=(year*365)+(month*30)+(week*7)+day;

    printf("\n\tyear=%d\n\tmonth=%d\n\tweek=%d\n\tday=%d\n\n",year,month,week,day);
    printf("\ncalculation=(%d*365)+(%d*30)+(%d*7)+%d=%d",year,month,week,day,calculation);

}
