#include <stdio.h>

 main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
{for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);


 }

 printf("Enter the elements of secondmatrix\n");

{
    for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &second[c][d]);


 }
printf("first matrix\n");
 {for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)

 printf("\t%d",first[c][d]);
}
printf("\nsecond matrix\n");
{for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)

 printf("\t%d",second[c][d]);
 }
  printf("\n sum of two matrix=\n");

 {for (c = 0; c < m; c++)
     {
         for (d = 0; d < n; d++)

      {
     sum[c][d]=first[c][d]+second[c][d];
     printf("\t%d",sum[c][d]);
     }

}
 }
}
