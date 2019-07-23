#include<stdio.h>
main()
{
 int A[20]={0,6,7,8},B[20]={0,3,4},NA,NB,ptr,R=3,S=2,i,j,k,N,mrg[200];
 NA=1;NB=1;ptr=1;N=R+S;
 while(NA<=R&&NB<=S)
 {
     if(A[NA]<B[NB])
     {
         mrg[ptr]=A[NA];
         ptr++;
         NA++;
     }
     else{
     mrg[ptr]=B[NB];
     ptr++;
     NB++;
     }
 }
 if (NA>R)
 {
     for (k=0;k<=(S-NB);k++)
     {
         mrg[ptr+k]=B[NB+k];
     }
 }
 else
 {

     for(k=0;k<=(R-NA);k++)
     {
         mrg[ptr+k]=A[NA+k];
     }

 }
 printf("\nMerged array is :");
 for (i = 1; i <= N; i++)
 printf("%d ", mrg[i]);
}
