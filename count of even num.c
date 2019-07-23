#include<stdio.h>
main()
{
    int i,n,count=0,sum=0;
    printf("Enter any integer number ");
scanf("%d",&n);
printf("\nEven num within %d  ==",n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;

            count++;
             printf("  %4d,",i);

        }

    }
     printf("\ntotal even num=%d",count);
     printf(" \n Sum of even num==%4d",sum);
}
