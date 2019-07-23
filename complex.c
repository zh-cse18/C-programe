#include<stdio.h>

struct complex
{
    int real,img;
};
 int main()
{
    struct complex a,b,c;
    printf("Enter a and b  where the equation is a+ib\n");
    printf("a=");
    scanf("%d",&a.real);
  printf("b=");
    scanf("%d",&a.img);
     printf("Enter c and d  where the equation is c+id\n");

     printf("c=");
    scanf("%d",&b.real);
     printf("d=");
      scanf("%d",b.img);

    c.real=a.real + b.real;
    c.img=a.img + b.img;
    if(c.img >= 0)
        printf("\n The sum is=%d+%di", c.real, c.img);
    else
      printf("\n The sum is=%d %di", c.real, c.img);


return 0;
}

