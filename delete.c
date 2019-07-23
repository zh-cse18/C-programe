#include<stdio.h>
int length1(char s1[]);
main(){
char text[100];
printf("Enter the text :");
gets(text);
int length,i,position,count1,j;
printf("Main text :: %s",text);
printf("\n\nEnter your position of delete : ");
scanf("%d",&position);
printf("\nEnter your length of delete :");
scanf("%d",&length);
count1=length1(text);

for(i=position-1;i<=count1-length;i++)
{
    text[i]= text[i+length];
}

printf("After deletion : %s",text);

}
int length1(char s1[])
{
int c1=0;
while(s1[c1]!='\0'){
  c1++;
}
return c1;
}
