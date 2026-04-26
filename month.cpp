#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"Enter the no: "<<endl;
    cin>>a;

    switch(a)
    {
        case(1):
        cout<<"january"<<endl;
        break;
        case(2):
        cout<<"february"<<endl;
        break;
        case(3):
        cout<<"March"<<endl;
        break;
        case(4):
        cout<<"April"<<endl;
        break;
        case(5):
        cout<<"May"<<endl;
        break;
        case(6):
        cout<<"june"<<endl;
        break;
        case(7):
        cout<<"july"<<endl;
        break;
        case(8):
        cout<<"August"<<endl;
        break;
        case(9):
        cout<<"September"<<endl;
        break;
        case(10):
        cout<<"october"<<endl;
        break;
        case(11):
        cout<<"November"<<endl;
        break;
        case(12):
        cout<<"December"<<endl;
        break;

        default:
        cout<<"U are Alien !!"<<endl;
        break;


        
    }
    return 0;
}