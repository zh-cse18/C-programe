#include<stdio.h>
main()
{
    int op1=4,op2=6;
    int BitwiseOR,LogicalOR,BitwiseNOT;
    int Lvalue,Rvalue;
     BitwiseOR=op1|op2;
     LogicalOR=op1||op2;
     printf("Bitwise OR of %d and %d is=%d",op1,op2,BitwiseOR);
     printf("\nLogical OR of %d and %d is=%d",op1,op2,LogicalOR);
     Lvalue=op2<<3;
     printf("\n 2 times of left shift of %d is=%d",op2,Lvalue);
     Rvalue=op2>>2;
     printf("\n 2 times of  right shift of %d is =%d ",op2,Rvalue);


}
