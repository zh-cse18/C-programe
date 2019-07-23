#include <stdio.h>
#include <string.h>

int main()
{
   char arr[100];

   printf("Enter a string to reverse:::::::::::");
   gets(arr);

   strrev(arr);

   printf("\nRverse of entered string is :::::::::%s",arr);
/*if(0==strcmp(gets(arr),strrev(arr)))
    printf("\npaiindrome");
else
    printf("\n not palindrome");

   return 0;*/
}
