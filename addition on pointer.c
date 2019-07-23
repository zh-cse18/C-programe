#include <stdio.h>

int main()
{
   int first, second, *p, *q, sum;

   printf("Enter two integers to add\n");
   scanf("%d%d", &first, &second);

   p = &first;
   q = &second;

   sum = *p + *q;
   int mul=(*p)*(*q);

   printf("Sum of entered numbers = %d\n",sum);
      printf("Sum of entered numbers = %d\n",mul);


   return 0;
}

