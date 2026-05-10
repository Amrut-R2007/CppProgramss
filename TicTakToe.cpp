#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>
 void drawboard(char *space);
 void playermoves(char *spaces,char player);
 void computermoves(char *spaces,char computer);
 bool WinnerCheck(char *spaces,char player,char computer);
 bool TieCheck(char *spaces);
 
 int main()
 {
    char player='X';
    char computer='O';
    char spaces[]={' ',' ',' ',' ',' ',' ',' ',' ',' '};

    while (true)
    {
      
      
      playermoves(spaces,player);
      drawboard(spaces);
      if(WinnerCheck(spaces,player,computer))
      {
        break;
      }
      if(TieCheck(spaces))
      {
        break;
      }

      
      computermoves(spaces,computer);
      drawboard(spaces);
      if(WinnerCheck(spaces,player,computer))
      {
        break;
      }
      if(TieCheck(spaces))
      {
        break;
      }
    }
    cout<<"*************** Thank You For Playing ***************\n";

    
    return 0;
 }

 void drawboard(char *space)
 {
    cout<<"     |     |     "<<endl;
    cout<<"  "<<space[0]<<"  |  "<<space[1]<<"  |  "<<space[2]<<"  "<<endl;
    
    cout<<"_____|_____|_____"<<endl;
     cout<<"     |     |     "<<endl;
    cout<<"  "<<space[3]<<"  |  "<<space[4]<<"  |  "<<space[5]<<"  "<<endl;
    
    cout<<"_____|_____|_____"<<endl;
     cout<<"     |     |     "<<endl;
    cout<<"  "<<space[6]<<"  |  "<<space[7]<<"  |  "<<space[8]<<"  "<<endl;
    cout<<"     |     |     "<<endl;
    

 }
 void playermoves(char *spaces,char player)
 {
    int n;
    do
    {
        cout<<"Enter Your Choice of marker to place in your move (1-9):"<<endl;
        cin>>n;
        n--;
    } while (n < 0 || n > 8);
    if(spaces[n] == ' ')
    {
        spaces[n]=player;
    }
    else{
         playermoves(spaces, player);
    }

 }
 void computermoves(char *spaces,char computer)
{
    int n;
    srand(time(0));
    while(true){
    n=rand()%9;
     if(spaces[n] == ' ')
    {
        spaces[n]=computer;
        break;
    }
}
}
 bool WinnerCheck(char *spaces,char player,char computer)
 {
    if(spaces[0]!=' '&&(spaces[0]==spaces[1] && spaces[1]==spaces[2]))
    {
        spaces[0]=='X'?cout<<"You Won\n":cout<<"You Lost\n";

    }
    else if(spaces[3]!=' '&&(spaces[3]==spaces[4] && spaces[4]==spaces[5]))
    {
        spaces[3]=='X'?cout<<"You Won\n":cout<<"You Lost\n";

    }
     else if(spaces[6]!=' '&&(spaces[6]==spaces[7] && spaces[7]==spaces[8]))
    {
        spaces[6]=='X'?cout<<"You Won\n":cout<<"You Lost\n";

    }
    else if(spaces[0]!=' '&&(spaces[0]==spaces[3] && spaces[3]==spaces[6]))
    {
        spaces[0]=='X'?cout<<"You Won\n":cout<<"You Lost\n";

    }
    else if(spaces[1]!=' '&&(spaces[1]==spaces[4] && spaces[4]==spaces[7]))
    {
        spaces[1]=='X'?cout<<"You Won\n":cout<<"You Lost\n";

    }
    else if(spaces[2]!=' '&&(spaces[2]==spaces[5] && spaces[5]==spaces[8]))
    {
        spaces[2]=='X'?cout<<"You Won\n":cout<<"You Lost\n";

    }
    else if(spaces[0]!=' '&&(spaces[0]==spaces[4] && spaces[4]==spaces[8]))
    {
        spaces[0]=='X'?cout<<"You Won\n":cout<<"You Lost\n";

    }
    else if(spaces[2]!=' '&&(spaces[2]==spaces[4] && spaces[4]==spaces[6]))
    {
        spaces[2]=='X'?cout<<"You Won\n":cout<<"You Lost\n";

    }
    else{
        return false;
    }
    return true ;

 }
 bool TieCheck(char *spaces)
 {
    for(int i=0;i<9;i++)
    {
        if(spaces[i]==' ')
        return false;
        
    }
    cout << "IT'S A TIE!\n";
    return true ;
 }