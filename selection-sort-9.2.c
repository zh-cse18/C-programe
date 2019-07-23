#include<stdio.h>
main()

{
    int k=1,i,j,n=6,temp,sa,loc,a[10]={0,10,9,7,6,3,4};
    printf("\nThe given array is :\n\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    for(k=1;k<n;k++)
    {
        sa=a[k];loc=k;
        for(j=k+1;j<=n;j++)
        {
            if(sa>a[j])
            {
                sa=a[j];loc=j;
            }
        }
        temp=a[k]; a[k]=a[loc]; a[loc]=temp;
    }
    printf("\nThe sorted array iz :\n\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
     printf("\n\n");

}
