#include<stdio.h>
main()
{
    int i,j=1,k=1;
    printf("Enter any digit=");
    scanf("%d",&i);
    while(k<=i)
    {
       j=j*k;

        printf("\n\n Factorial of %d is=%d",k,j);
         k++;
    }

}
