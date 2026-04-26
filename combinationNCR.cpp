#include<iostream>
using namespace std ;
double comb(int ,int);
int main ()
{int n,r;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the value of r :";
    cin>>r;
    cout<<comb(n,r);
    return 0;
}
double comb(int n,int r)
{
    if(r==0)
    {return 1;}
    else
    {
        return (n/(r))*comb(n-1,r-1);
    }
}