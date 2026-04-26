#include<iostream>
using namespace std;
int main()
{
    string fname,lname,dob,mail,sub;
    cout<<"Enter your first name : "<<endl;
    getline(cin,fname);
    cout<<"Enter your last name : "<<endl;
    getline(cin,lname);
    cout<<"Enter your dob(in ddmmyyyy format) : "<<endl;
    getline(cin,dob);
    sub=dob.substr(1,4);
    sub=sub.insert(0,".");
    mail=fname+lname+sub;
    mail += "@gmail.com";
    cout<<"Your Mail Id is :"<<mail<<endl;

    return 0;
}