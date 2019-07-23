#include<stdio.h>
main()
{
    int a[550000]={5,4,54,65,78,657,6574,878,57,479,878,754,79,878,77},i,count=0,sum=0;
    //int a[40]={12,56,65,654,654,104,5,65,56,54,658,55,485},i,count=0;
    for(i=1;i<=100000;i++)
    {
        if(a[i]=='\0')
          {
              count=i;
              break;
          }
          sum=sum+a[i];

    }
printf("\n Total array element is=%d",count);
printf("\n Total array element sum is=%d",sum);
}
