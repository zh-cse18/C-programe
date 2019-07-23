
#include<stdio.h>
void main()
{
	int N, Temp, i, j;
	int *A;

	printf(" ENTER THE NUMBER OF TERMS...: ");
	scanf("%d", &N);
	printf("\nENTER THE %d  ELEMENTS OF THE ARRAY...:\n",N);

	A=(int *)malloc (sizeof(int)*N);

	for(i=0; i<N; i++)
	{  printf("(%d).",i+1);
		scanf("\n\t\t %d", &A[i]);
	}
	for(i=1; i<N; i++)
	{
		Temp = A[i];
		j = i-1;
		while(Temp<A[j] && j>=0)
		{
			A[j+1] = A[j];
			j = j-1;
		}
		A[j+1] = Temp;
	}
	printf("\nTHE ASCENDING ORDER LIST IS...:\n");
	for(i=0; i<N; i++)
		printf("\n\t\t\t%d", A[i]);
	getch();
}
