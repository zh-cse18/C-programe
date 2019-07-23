#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (pow(x,3) + 3 * x -  1)
#define g(x) (3* pow(x,2) + 3)
 
void main()
 
{
 
int i ;
 
float a , b , f [10],g[10],x[10];
 
clrscr();
 
a=0.001;
 
read:
 
b = a +1 ;
 
if ((f(a) * f(b)) > 0)
 
{
 
a=b;
 
goto read ;
}
 
else
 
x[0]=a;
 
for (i = 0 ; i <  20 ; i++)
{
 
f[i]= f(x[i]);
 
g[i]= g(x[i]);
 
 
x [i +  1] = x [i] - (f[i] / g [i]);
 
if (fabs(x[i + 1] - x [i]) < pow(10,-6))
 
goto write ;
}
 
write :
 
printf("\n smaller positive root is %f" , x [i]);
 
getch ();
}
