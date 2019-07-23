#include <iostream>
02
#include <cmath>
03

04
   using namespace std;
05

06
    double function(double x)
07
   {
08
      double fx;
09
      fx = x - (1.0/pow(2.0,x));
10
      return fx;
11
   }
12

13
    int main()
14
   {
15
      double lower_bound, upper_bound, tolerance, p, fp, fafb;//p is the point, fp is the functio of value of the point
16
      //fafb is the multiplication test for the Intermediate value theorem
17
      int iterations;// this is purposely declared as an int
18
      cout<<"Enter the lower bound\n";
19
      cin>>lower_bound;
20
      cout<<"Enter the upper bound\n";
21
      cin>>upper_bound;
22
      cout<<"Enter the level of tolerance for error\n";
23
      cin>>tolerance;
24
      iterations = (log((upper_bound - lower_bound)/tolerance))/(log(2.0)) + 1;
25
      cout<<"The bisection algorithm will execute "<<iterations<<" times.\n";
26
      for(int i = 0; i < iterations; i++)
27
      {
28
         p = (upper_bound - lower_bound)/2.0;
29
         cout<<p<<endl;
30
         fafb = function(lower_bound)*function(p);
31
          cout<<"F(a) * F(b) = "<<fafb<<endl;
32
         fp = function(p);
33
         cout<<"F(p) = "<<fp<<endl;
34

35
         if(fp == 0 ||(((upper_bound + lower_bound)/2.0) < tolerance))
36
         {
37
            cout<<"Procedure completed successfully. p = "<<p<<endl;
38
         }
39
         else if(function(lower_bound) * function(p) < 0)
40
         {
41
            upper_bound = p;
42
         }
43
         else if(function(lower_bound) * function(p) > 0)
44
         {
45
            lower_bound = p;
46
         }
47
         else
48
         {
49
            cout<<"Operation failed.\n";
50
         }
51
      }
52
   }

