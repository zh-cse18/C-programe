    #include <stdio.h>
    #include <stdlib.h>

   void gaussSimple(double *a[], double b[], double x[], int n)

{

       int k,i,j, aux=n, *tam=&aux;

       *tam=*tam-1;
       double factor, suma;

       for( k=0; k<=n-1; k++)

       {

               for( i=k+1;i<n;i++)

               {

                       factor=a[i][k]/a[k][k]; //The segmentation fault appears on this line

                       for( j=k+1; j<n; j++)

                       {

                               a[i][j]=a[i][j]-factor*a[k][j];

                       }

                       b[i]=b[i]-factor*b[k];

               }

       }

       x[*tam]=b[*tam]/a[*tam][*tam];

       for( i=n-2;i=0;i--)

       {

               suma=b[i];

               for( j=i+1;i<n;i++)
               {




                       suma=suma-a[i][j]*x[j];

               }

               x[i]=suma/a[i][i];

       }


int main()

{

    int n, *tam;

    double *sel[*tam], sol[*tam], x[*tam];



    printf("Escriba el numero de incognitas a encontrar: ");

    scanf("%i", &n);

    *tam=n;


    {

            sel[i]=(double*)malloc(n*sizeof(double));

    }
int i;
    for( i=0;i<n;i++)

    {



            for( j=0;j<n;j++)

            {

                    printf("\n\nEscriba el %i coeficiente de x%i: ", i+1, j);

                    scanf("%lf", &sel[i][j]);

            }

            printf("\n\nEscriba la solucion para la %i ecuacion: ", i+1);

            scanf("%lf", &sol[i]);



    }

    gaussSimple(sel,sol,x,n);

    printf("\n\nLas soluciones son:\n\n");

    for( i=0;i<n;i++)

    {

            printf("x%i: %f\n\n", i, x[i]);

    }





