include<iostream>
#include <windows.h>
#include <cstdlib>
#include<stdlib.h>
#include <time.h>
using namespace std;

void intro()
{
     for(int i=0; i<5; i++)
    {
        cout<<endl;
    }
    cout<<"                          LET'S GET STARTED"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<endl;
    }
    cout<<" Click Enter to begin "<<endl;

}
void rules()
{
    cout<<"RULES FOR TIC-TAC-TOE "<<endl;
cout<<endl;
cout<<"1. The game is played on a grid that is 3 by 3 squares."<<endl;
cout<<endl;
cout<<"2. Player 1  is X, player 2 is O."<<endl;
cout<<endl;
cout<<"3. The first player to get 3 of their marks in a row (up, down, across, or diagonally) is the winner."<<endl;
cout<<endl;
cout<<"4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie. "<<endl;
cout<<endl;
cout<<"5. Choose the slots using numbers represented by each slot"<<endl;
cout<<endl;
cout<<"6. Do not enter any other keys except 1-9. "<<endl;

for(int i=0; i<4; i++)
{
    cout<<endl;
} 

void board()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    srand(time(0));
    int no=rand()%2+1;


    system("cls");
    SetConsoleTextAttribute(h, no+1) ;
//    SetConsoleTextAttribute(h, 4,);
    cout << "\n\n\tTic  Tac Toe \n\n";
    SetConsoleTextAttribute(h, no) ;
    cout<<"Player 1 (X) - Player 2 (0) "<<endl;
    cout<<endl;

    cout<<"                                          |   |   "<<endl;
    cout<<"                                        "<<square[1]<<" | "<<square[2]<<" | "<<square[3]<<endl;

    cout<<"                                       ___|___|___"<<endl;
    cout<<"                                          |   |   "<<endl;

    cout<<"                                        "<<square[4]<<" | "<<square[5]<<" | "<<square[6]<<endl;

    cout<<"                                       ___|___|___"<<endl;
    cout<<"                                          |   |   "<<endl;

    cout<<"                                        "<<square[7]<<" | "<<square[8]<<" | "<<square[9]<<endl;

    cout<<"                                          |   |   "<<endl<<endl;


}
cout<<" Click  Enter to start "<<endl;
}
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();

int main()
{
    intro();
    string start;
   // cin>>start;
   cin.get();
    system("cls");
    rules();
    //cin>>start;
    cin.get();
    system("cls");

//    if (start ='A')
//    {
//        system("cls");
//    }
//    else{
//
//        system("cls");
//    }
      int player=1 , i, choice;

     char mark;
     do
     {


         board ();
        // player=(player%2)?1:2;//
         if (player % 2)
         {
             player =1;
         }
         else{
            player=2;
         }

         cout<<"Player " <<player << ", enter a  number :   ";
         cin >>choice;
         //mark = (player ==1) ? 'X' : '0';
         if (player==1)
         {
             mark='X';
         }
         else{
            mark='O';
         }
         if (choice ==1 && square[1]=='1')
         {
             square[1]=mark;
         }
         else if (choice ==2 && square[2]=='2')
         {
             square[2]= mark;
         }
         else if (choice ==3 && square[3]=='3')
         {
             square[3]= mark;
         }
                  else if (choice ==4 && square[4]=='4')
         {
             square[4]= mark;
         }
                  else if (choice ==5 && square[5]=='5')
         {
             square[5]= mark;
         }
                  else if (choice ==6&& square[6]=='6')
         {
             square[6]= mark;
         }
                  else if (choice ==7 && square[7]=='7')
         {
             square[7]= mark;
         }         else if (choice ==8 && square[8]=='8')
         {
             square[8]= mark;
         }         else if (choice ==9 && square[9]=='9')
         {
             square[9]= mark;
         }
         else
         {
             cout<<"Invalid move "<<endl;

             player--;
           //cin.ignore();
             //cin.get();
         }
         i=checkwin();
         player++;
     }
     while(i==-1);
     board();
     if (i==1)
     {
         cout<<"==>/aPlayer "<<--player<<"win"<<endl;

     }
     else {
        cout<<"==>\aGame draw"<<endl;
        cin.ignore();
        cin.get();

     }
     return 0;

}

int checkwin()
{
    if (square[1]==square[2] && square[2]==square[3])
    {
        return 1;
    }
    else if ( square[4]==square[5]&&square[5]==square[6])
    {
        return 1;
    }
    else if ( square[7]==square[8]&&square[8]==square[9])
    {
        return 1;
    }
    else if ( square[1]==square[4]&&square[4]==square[7])
    {
        return 1;
    }
    else if ( square[2]==square[5]&&square[5]==square[8])
    {
        return 1;
    }
    else if ( square[3]==square[6]&&square[6]==square[9])
    {
        return 1;
    }
    else if ( square[1]==square[5]&&square[5]==square[9])
    {
        return 1;
    }else if ( square[3]==square[5]&&square[5]==square[7])
    {
        return 1;
    }else if ( square[1]!= '1' && square[2] !='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9')

    {
        return 0;
    }
    else {
            return -1;
    }
}


             



