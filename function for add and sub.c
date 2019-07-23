#include<stdio.h>
main()
{ int a,b;
    int add(int a,int b)
    {
     int   c=a+b;
    }
    int sub(int a,int b)
    {
      int  c=a-b;
    }
    int mul(int c,int d)
    {
        int e=c*d;
    }
    float div(int c,int d)
    {
        float e=c/(float)d;
    }
     int mod(int c,int d)
    {
        int e=c%d;
    }
    printf("Enter two  your choicable number\n");
    scanf("%d %d",&a,&b);
    printf("1.add=%d\n",add(a,b));
    printf("2.sub=%d",sub(a,b));
    printf("\n3. mul=%d",mul(a,b));
    printf("\n4.div=%f",div(a,b));
     printf("\n5. modulas=%d\n",mod(a,b));
}
