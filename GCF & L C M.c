#include<stdio.h>
main()
{
    int m,n,temp,p,q,t;

    printf("Enter the value of m & n\n");
    scanf("%d%d",&m,&n);
     if(m<n)
     {
       p=n;
       q=m;
     }
     else
     {
         p=m;
         q=n;
     }


     while(q!=0)
     {
         temp=p%q;
         p=q;
         q=temp;
     }

     printf(" \n\nGCF is=%d",p);



     t=(m*n)/p;
      printf(" \n\nLCM is=%d",t);
}
