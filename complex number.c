#include<stdio.h>
struct complex {

int real,img;

};

int main()
{
    struct complex a,b,c;
    printf(" For a+ib equition");
    printf("\na=");
    scanf("%d",&a.real);
     printf("\nb=");
    scanf("%d",&a.img);
     printf("\n For c+id equition");
    printf("\nc=");
    scanf("%d",&b.real);
     printf("\nd=");
    scanf("%d",&b.img);

    c.real=a.real+b.real;
    c.img=a.img+b.img;

    if(c.img>=0)
        printf("sum=%d+%di",c.real,c.img);
    else
        printf("sum=%d%di",c.real,c.img);
    return 0;
}
