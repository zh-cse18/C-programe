#include <stdio.h>
int main()
{
    char str1[20], str2[20], i, j;
    printf("Enter The 1st string :");
    gets(str1);
    printf("Enter The 2nd string :");
    gets(str2);
    for(i=0; str1[i]!='\0'; ++i);
    {
    for(j=0; str2[j]!='\0'; ++j, ++i)
    {
        str1[i]=str2[j];
    }
    }
    str1[i]='\0';
    printf("After concatenation: %s",str1);
    return 0;
}
