#include <stdio.h>
#include <stdlib.h>

int main()
{
    float I = 0;
    float J = 1;
    int counter = 999;

    while(I < 2.2 && J < 5.2){
         printf("I=%.1f J=%.1f\n", I, J);
         J++;
         printf("I=%.1f J=%.1f\n", I, J);
         J++;
         printf("I=%.1f J=%.1f\n", I, J);

         I = I + 0.2;
         J = 1 + I;


    }

    return 0;
}
