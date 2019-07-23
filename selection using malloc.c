#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,min,j;
    int *array;
    printf("The no of elements :::: ");
    scanf("%d",&n);
    printf("Enter %d element\n",n );
    array = (int *)malloc (sizeof(int) * n);


    //INPUT NUMBERS
    for (i=0 ; i<n ; i++)
        {
            printf(">>Enter the element %d\n" , i+1);
            scanf("%d", &array[i]);
        }

    //SORT THE ARRAY
    for (i = 0; i < n; ++i)
        {
            min = i;
            for ( j = i+1; j < n; ++j)
            {
                if (array[j] < array[min])
                    min = j;
            }
            if (min != i)
            {
                int temp;
                temp = array[i];
                array[i]= array[min];
                array[min]=temp;
            }+
        }

    //PRINTING ARRAY
    for (i=0 ; i<n ; i++)
        {
            printf("-- %d --\n" , array[i]);
        };
}
