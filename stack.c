#include<stdio.h>
#include<conio.h>
#define N=100
void push();
void pop();
void Display();
main()
{
    char ch;
    while(ch=!'4')

    {
        printf("\n\n********************Main menu*********************\n");
    printf("1.  Push       2.pop      3.Display     4.Quit");
    printf("Enter your option (1-4)");
    scanf("%c",&ch);
    switch(ch)
    {
        case '1':push();
        break;
        case '2':pop();
        break;
        case '3':Display();
        break;
        case '4':
            printf("thank you");
            break;
        default:
            printf("\n invalid choice");
    }
    }
}
void push()
{
    if (top<N)
    {
        printf("\n Enter yoour data");
        scanf("%d",&stack[top]);
        top++;
        printf("push operatiion is successful")
    }
}
