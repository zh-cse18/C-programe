#include<stdio.h>
main()
{ function=@(x) x.^2-6;
    lower=0;
    upper=5;
     float root;
    mid=(lower=upper)/2;

    while abs(function(mid))>0.01
    {if(function(mid)*function(upper))<0


    {lower=mid;}

    else
    {upper=mid;}
    }

    mid=lower=upper)/2;
    printf("The root is %f ",mid);


}
