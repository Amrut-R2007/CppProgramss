#include<iostream>
using namespace std ;
 double fib(int);
 int main ()
 {
    int a;
    cout<<"Enter the value :";
    cin>>a;
    cout<<fib(a);
    return 0;
 }
 double fib(int n)
 { static int a=0;
    static int b=1;
if(n<=1)
    return n;
    
else
    {
 return fib(n-2)+fib(n-1);
    }
 }