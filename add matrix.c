#include<stdio.h>
int main()
{
    int m,n ,c,d,first[10][10],second[10][10],sum[10][10],sub[10][10],multi[10][10];
    printf("Enter colomn & row number");
    scanf("%d%d",m,n);
    printf("\n First matrix contains :");
    for(c=0;c<m;c++)
    {
          for(d=0;d<n;d++)
    }
    {
     scanf("\n%d",&first[c][d]);
    }



         printf("\n First matrix contains :");
    for(c=0;c<m;c++)
    {for(d=0;d<n;d++)

    }
    {
         scanf("\n%d",&second[c][d]);
    }



        printf("\n Result of two matrix:");

         for(c=0;c<m;c++)
{
     for(d=0;d<n;d++)
}
       {
            sum[c][d]=first[c][d]+second[c][d];
                    sub[c][d]=first[c][d]-second[c][d];
            multi[c][d]=first[c][d]*second[c][d];
            printf("\nsum=%d",sum[c][d]);
  printf("\nsub=%d",sub[c][d]);
          printf("\nmulti=%d",multi[c][d]);
       }
          return 0;




}
