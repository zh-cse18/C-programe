#include <stdio.h>

int main()
{
  int c, n, fact = 1;

  printf("Enter a number to calculate it's factorial\n");
  scanf("%d", &n);

  for (c = 1; c <= n; c+=2)

  {
          fact = fact * c;

          printf("(%d)Factorial of %d = %d\n",c, c, fact);

  }




  return 0;
}
