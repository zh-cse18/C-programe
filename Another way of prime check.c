#include<stdio.h>
main()
{
    int n, i=1,count=0;
    printf("Enter a positive integer ==");
    scanf("%d",&n);


    while(i<=n)

    {
        if(n%i==0)
            count++;


        i++;
    }


    if(count>=3)
    {
     printf("\n %d is  not a  prime  number",n);

    }
    else
    {
         printf("\n %d is a prime  number",n);
    }
}
