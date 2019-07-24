#include<stdio.h>
main()
{
    int n,j,i,y,max;
    int arr[1000];

printf("How many number you want to get =");
    scanf("%d",&n);


    printf("\nInput %d number",n);
    for(i=0;i<=n;i++)
    scanf("%d\n",&arr[i]);
   // for(j=0;j<=n;j++)
   //printf("\n %d",arr[j]);

   max=arr[0];
    for(i=1;i<=n;i++)

    {
        if(max<arr[i])

        {max=arr[i];
        y=i;

        }



    }






printf("Largest value position Is %d and =%d",y+1,max);


}
