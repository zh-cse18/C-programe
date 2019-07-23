#include<stdio.h>

main()
{
    int a[]={25,58,69,78,63},i,count=0;
    for(i=0;i<7;i++)
    {if(a[i]=='\0')
    {count=i;
    break;
    }
    }printf("\ntotal element=%d",count);
}
