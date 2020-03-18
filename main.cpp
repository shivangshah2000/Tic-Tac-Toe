#include<bits/stdc++.h>
using namespace std;

void board();
int checkwin();
int number,i=-1,player1,player2,a=1,t,mark,cnt=0;

    char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int main()
{

      cout<<"Welcome to Tic-Tac-Toe"<<endl<<endl;
      board();

      cout<<"This is a multiplayer game. Player 1(X)-Player 2(O)"<<endl<<endl;
      cout<<"If the player enters a number other than 1-9 , the game will end in  a tie."<<endl<<endl;
      while(i!=1)
      {
          if(a%2==1)
          {
              a=1;
          }
          else
          {
              a=2;
          }
          cout<<"Player"<<" "<<a<< " Enter a number :"<<endl;
          cin>>t;
          cnt++;
          mark=(a == 1) ? 'X' : 'O';
              if(square[1]=='1'&&t==1)
              {
                  square[1]=mark;
              }
              if(square[2]=='2'&&t==2)
              {
                  square[2]=mark;
              }
              if(square[3]=='3'&&t==3)
              {
                  square[3]=mark;
              }
              if(square[4]=='4'&&t==4)                                 /* To mark the the players choice by 'X' or 'O' in the tic-tac-toe board */
              {
                  square[4]=mark;
              }
              if(square[5]=='5'&&t==5)
              {
                  square[5]=mark;
              }
              if(square[6]=='6'&&t==6)
              {
                  square[6]=mark;
              }
              if(square[7]=='7'&&t==7)
              {
                  square[7]=mark;
              }
              if(square[8]=='8'&&t==8)
              {
                  square[8]=mark;
              }
              if(square[9]=='9'&&t==9)
              {
                  square[9]=mark;
              }

              board();
              i=checkwin();
              if(i==1)
              {
                   cout<<"The winner of the game is Player="<<a<<endl<<endl;
                   return 0;
              }
              if(cnt==9)
              {

                  break;
              }
              a++;
          }
          if(cnt==9)
          {
              cout<<"The game is a tie"<<endl;
          }
    return 0;
}

void board()
{
   cout<<"   |   |   "<<endl;
    cout<<" "<< square[1] <<" "<<"|" <<" "<<square[2] <<" "<< "|" <<" "<< square[3] <<endl;   /* To print the Tic-Tac-Toe Board after every move */
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<" "<< square[4] <<" "<<"|" <<" "<<square[5] <<" "<< "|" <<" "<< square[6] <<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<" "<< square[7] <<" "<<"|" <<" "<<square[8] <<" "<< "|" <<" "<< square[9] <<endl;
    cout<<"   |   |   "<<endl;
    cout<<endl<<endl;
}
int checkwin()
{
    if(square[1]==square[2]&&square[2]==square[3])
    {
        return 1;
    }
    else if(square[1]==square[4]&&square[4]==square[7])          /* To check if any player won after every step */
    {
        return 1;
    }
    else if(square[4]==square[5]&&square[5]==square[6])
    {
        return 1;
    }
    else if(square[7]==square[8]&&square[8]==square[9])
    {
        return 1;
    }
    else if(square[2]==square[5]&&square[5]==square[8])
    {
        return 1;
    }
    else if(square[3]==square[6]&&square[6]==square[9])
    {
        return 1;
    }
    else if(square[1]==square[5]&&square[5]==square[9])
    {
        return 1;
    }
    else if(square[3]==square[5]&&square[5]==square[7])
    {
        return 1;
    }
    else
    {
        return -1;
    }

}



