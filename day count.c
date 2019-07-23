#include<stdio.h>
main()
{
    system("color a5");
    int day_number;
    int Friday, Saturday,Sundayy,Monday,Tuesday,Wednesday,Thirsday;
   Friday==1; Saturday==2;Sundayy==3;Monday==4;Tuesday==5;Wednesday==6;Thirsday==7;

     printf("\n What is today \n1.Friday \n2.Saturday\n3.Sundayy\n4.Monday\n5.Tuesday\n6.Wednesday\n7.Thirsday");
//scanf("%d",);
    printf("\n\n \bEnter your desirable day number :");
    scanf("%d",&day_number);
    if(day_number%7==0)
        printf("\nThe %dt day is  from friday =friday",day_number);

     if(day_number%7==0)
        printf("The %dth day is from friday=friday",day_number);
     if(day_number%7==1)
        printf("The %dth day isfrom friday =saturday",day_number);
     if(day_number%7==2)
        printf("The %dth day is from friday=sunday",day_number);
     if(day_number%7==3)
        printf("The %dth day is from friday=monday",day_number);
     if(day_number%7==4)
        printf("The %dth day isfrom friday =tuesday",day_number);
     if(day_number%7==5)
        printf("The %dth day is from friday=wednesdayday",day_number);
     if(day_number%7==6)
        printf("The %dth day is from friday=thirsday",day_number);
getch ();

}
