#include<stdio.h>

int BinarySearch(int *array, int number_of_elements, int key)
{
        int low = 0, high = number_of_elements-1, mid;
        while(low <= high)
        {
                mid = (low + high)/2;
                if(array[mid] < key)
                {
                        low = mid + 1;
                }
                else if(array[mid] == key)
                {
                        return mid;
                }
                else if(array[mid] > key)
                {
                        high = mid-1;
                }

        }
        return -1;
}
int main()
{
        int number_of_elements;
        printf("Enter the element number:::");
        scanf("%d",&number_of_elements);
        int *array;
        int iter;
         printf("Enter %d element :::\n",number_of_elements);

         array=(int *)malloc(sizeof(int)*number_of_elements);

        for(iter = 0;iter < number_of_elements;iter++)
        {        printf("(%d).",iter+1);
                scanf("%d",&array[iter]);
        }

        printf("\n Enter your desirable number:::");

        for(iter = 1;iter < number_of_elements;iter++)
        {
                if(array[iter] < array[iter - 1])
                {
                        printf("Given input is not sorted\n");
                        return 0;
                }
        }
        int key;
        scanf("%d",&key);

        int index;
        index = BinarySearch(array,number_of_elements,key);
        if(index==-1)
        {
                printf("Element not found\n");
        }
        else
        {

                printf("\nElement is at index %d\n",index);
        }
        return 0;
}
