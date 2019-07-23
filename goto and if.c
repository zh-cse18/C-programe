#include<stdio.h>
main()
{
    int age;
    zahid:
        printf("Enter  your age=");
        scanf("%d",&age);
        if(age>85)
        {printf("\n Your age should be under 85\nTRY AGAIN!!!!!!!!!!!!!\n\n\n");
            goto zahid;

        }
        else
        {
            if(age<10)
            {
                printf("\n You are a child");
            }
            else if(age>10&&age<50)
            {
                printf("\n You are a young");
            }
            else if(age>50)
            {
                printf("\n You are a old");
            }
        }
        getch();
}
