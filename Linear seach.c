#include<stdio.h>
#include<conio.h>
void main()
{
 int num,i,n,found=0,pos=-1;
 int *arr;

 printf("Enter the number of elements in the array: ");
 scanf("%d",&n);

 printf("\nEnter the elements: \n");
 arr=(int *)malloc(sizeof(int)*n);
 for(i=0;i<n;i++)
 {
  printf("arr[%d] = ",i);
  scanf("%d",&arr[i]);
 }

 printf("\nEnter the number that has to be searched: ");
 scanf("%d",&num);

 for(i=0;i<n;i++)
 {
  if(arr[i]==num)
  {
   found=1;
   pos=i;
   printf("\n %d is found in the array at = %d",num,i);
   break;
  }
 }
 if(found==0)
 printf("\ %d does not exist in the array",num);
 getch();
}
