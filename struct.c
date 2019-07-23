#include<stdio.h>
#include<string.h>

struct personal
{
    char name[20];
    int days;
    char month[10];
    int year;
    float salary;

};


 int main()
{int i;
 struct personal person[2];
for(i=0;i<2;i++)
{  printf("Input name \n");
     scanf("%[A-B]",&person[i].name);
     printf("Input days \n");
      scanf("%d",&person[i].days);
         printf("Input month \n");
         scanf("%s",&person[i].month);
          printf("Input year \n");
           scanf("%d",&person[i].year);
            printf("Input salary \n");
          scanf("%f", &person[i].salary);

}

    for(i=0;i<2;i++)
    {
        printf("\bh\nName=%s\nDay= %d \nMonth=%s \nyear=%d \n Salary=%f\n",
           person[i].name,
          person[i].days,
          person[i].month,
          person[i].year,
          person[i].salary);

    }

return 0;

}

