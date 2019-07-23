#include <stdio.h>
#include <string.h>

void main()
{
 char string1[50],string2[20],total[20];
 int position=0,r=0,i=0,t=0,n;
 printf("Enter The Main String:");
 gets(string1);
 printf("Enter Substring :");
 gets(string2);
 printf("Enter the position where the item has to be inserted: ");
 scanf("%d",&position);
 r = strlen(string1);
 n = strlen(string2);
 i=0;
 for(i=r+n;i>n;i--)
 {
     string1[i]=string1[i-n];
 }
t=0;
  for(i=position-1;i<position+n-1;i++)
  {
      string1[i]=string2[t];
      t++;
  }

  printf("%s\n\n\n", string1);
 /* for(i=0;i<r+n;i++)
  {
    printf("%c", string1[i]);

  }
 while(i <= r)
 {
  total[i]=string1[i];
  i++;
 }
 s = n+r;
 o = position+n;

 for(i=position;i<s;i++)
 {
  x = total[i];
  if(t<n)
  {
   string1[i] = string2[t];
   t=t+1;
  }
  string1[o]=x;
  o=o+1;
 }
if(position>r)
{
    printf("Input Position is more then given string");
}
else
{
 printf("%s", string1);
}
*/
}
