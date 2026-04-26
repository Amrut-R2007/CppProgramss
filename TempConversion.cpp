#include<iostream>
using namespace std;
 int main()
 {
    double c,f;
    int a;
    cout<<"select the conversion type !"<<endl;
    cout<<"1.celsius to farenheit'\n'2.farenheit to celsius "<<endl;
    cin>>a;
    if(a==1)
    { 
        cout<<"Enter the temperature in c: "<<endl;
        cin>>c;
        f=c*(9/(double)5)+32;
        cout<<"F="<<f<<endl;
    }
    else if(a==2)
    {
         cout<<"Enter the temperature in f: "<<endl;
        cin>>f;
        c=5*(f-32)/(double)9;
        }
        else
        cout<<"U are blind"<<endl;
    return 0;
 }