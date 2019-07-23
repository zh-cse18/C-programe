#include <stdio.h>
int main()
{
    int x[7]={90,990,78,41,21,270,35};
    int i, max, secmax, y;
    secmax=0;
    max=x[0];
    for(i=1;i<=7;i++)
        {
        if (x[i]>max)
            {
            secmax=max;
            max=x[i];
            y=i;
            }
        else if (x[i]>secmax&&x[i]<max)
                {
            secmax=x[i];
            }
        }
          printf(" Largest value position  %d=  %d .\n Second largest value= %d\n",y+1,max,secmax);


}
