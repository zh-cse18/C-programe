#include <stdio.h>
#include <string.h>

int main()
{
   char string[1000];

   printf("Input a string to convert to upper case\n");
   gets(string);

   printf("Input string in upper case: \"%s\"\n",strupr(string));
 printf("Input string in upper case: \"%s\"\n",strlwr(string));
   return  0;
}
