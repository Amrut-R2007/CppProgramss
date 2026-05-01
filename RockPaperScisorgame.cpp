#include<iomanip>
#include<iostream>
#include<ctime>
#include <stdlib.h>
using namespace std;
char UserChoice();
void showChoice(char uch);
char compChoice();


int main() {
    // 1. Initialize scores
    int a, uscore = 0, cscore = 0;
    char uch, cch;
    
    // 2. Seed once at the start
    srand(time(0)); 

    cout << "Enter 1 to enter the game and 0 to exit: ";
    cin >> a;

    if (a == 0) return 0;

    do {
        uch = UserChoice();
        cout << "Your Choice: "; showChoice(uch);

        cch = compChoice();
        cout << "Computer Choice: "; showChoice(cch);

        // 3. Comparison Logic Fix (using ==)
        if (uch == cch) {
            cout << "It's a Tie!" << endl;
        } 
        else if ((uch == 'r' && cch == 's') || 
                 (uch == 'p' && cch == 'r') || 
                 (uch == 's' && cch == 'p')) {
            cout << "User Wins!" << endl;
            uscore++;
        } 
        else {
            cout << "Computer Wins!" << endl;
            cscore++;
        }

        cout << "Current Score -> User: " << uscore << " | Computer: " << cscore << endl;
        cout << "\nDo you want to continue? (1 for Yes, 0 for No): ";
        cin >> a;
    } while (a != 0);

    return 0;
}
char UserChoice()
{ char ch;
    do
    {
     cout<<"Choose one of the following :"<<endl;
     cout<<"'r':Rock\n'p':Paper\n's':Scisors"<<endl;
     cin >>ch;
    } while (ch!='s' && ch!='r' && ch!='p');
    return ch;
    
}
void showChoice(char uch)
{
    switch (uch)
    {
    case 'r':cout<<"ROCK\n";
    
        break;
    case 's':cout<<"SCISOR\n";
    
        break;
    case 'p':cout<<"PAPER\n";
    
        break;
    
    default:
        break;
    }
}
char compChoice()
{
    char ch ;
    int a;
    srand(time(0));
    a=rand()%3+1;
    switch (a)
    {
    case 1: ch='r';
        break;
    case 2:ch='s';
        break;
    case 3:ch='p';
        break;
    
    default:
        break;
    }
    return ch;
    
    
}