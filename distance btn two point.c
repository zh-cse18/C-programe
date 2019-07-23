#include<stdio.h>
main()
{
    float a,b,c;
    float A,S;
    printf("Enter the value of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    S=((a+b+c)/2);
    A=(S *(S-a)*(S-b)*(S-c));


    printf("The distance of three point=%f",A);
}
