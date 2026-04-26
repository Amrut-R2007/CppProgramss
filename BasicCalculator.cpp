#include<iostream>
using namespace std;
/* for this calculator i could have used switch case but i insisted on if 
statements coz : Mah Life Mah Rulz*/
double  getdata();
int main ()
{  
    cout<<"Welcome to basic Calculator !"<<endl;
    cout<<"1.Addition'\n'2.Subtraction'\n'3.Multiplication'\n'4.Division'\n'"<<endl;
    int op;
    double a,b;
    cout<<"Enter the operation :"<<endl;
    cin>>op;
    a=getdata();
    b=getdata();
   if (op==1)
   {
    cout<<"Sum of "<<a<<" and "<<b<<" is : "<<a+b<<endl;
   }
   else if(op==2)
   {
     cout<<"Subtraction  of "<<a<<" from "<<b<<" is : "<<b-a<<endl;
   }
   else if(op==3)
   {
     cout<<"Product of "<<a<<" and "<<b<<" is : "<<a*b<<endl;
   }
   else if(op==4)
   {
     cout<<"Diviison of "<<a<<" by "<<b<<" is : "<<a/b<<endl;
   }
   else
   cout<<"Looks Like Theres an error , We will get back shortly !!";

    return 0;
}
double  getdata()
{ double a;
    cout<<"Enter The Value :"<<endl;
    cin>>a;
    return a;
}