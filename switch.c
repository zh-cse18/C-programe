#include<stdio.h>
main()
{
    int a;
    zahid:
    printf("\nEnter your subject number::::::::");
    scanf("%d",&a);
    if(a<=0||a>100)
    {printf("\n Invalid number\n TRY AGAIN");
           goto zahid;
    }
    else
    { system("COLOR b2");
        int b=a/10;
        switch(b)
        {
        case 1:
             printf("\n You have got %d numbers.\n And you have failed in this sub.",a);
            break;

        case 2:
             printf("\n You have got %d numbers.\n And you have failed in this sub.",a);
             break;
        case 3:
            printf("\n You have got %d numbers.\n And you have failed in this sub.",a);
            break;

        case 4:
             printf("\n You have got %d numbers.\n And you have got (D)Grade in this sub.",a);
             break;


            case 5:
             printf("\n You have get %d numbers.\n And you have (C)Grade in this sub.",a);
             break;

            case 6:
                 printf("\n You have get %d numbers.\n And you have (B)Grade in this sub.",a);
                 break;

            case 7:
                 printf("\n You have get %d numbers.\n And you have (A-)Grade in this sub.",a);
                 break;

            case 8:
                 printf("\n You have get %d numbers.\n And you have (A)Grade in this sub.",a);
                 break;


                 case 9:
                 case 10:
                     printf("\n You have get %d numbers\n And you have ( A+) Grade in this sub",a);
                     break;
            }
    }
    getch();

}
