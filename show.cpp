#include<bits/stdc++.h>
using namespace std;

void show(int board[3][3])
{
    if(board[0][0]==0)
        cout<<"00 |";
    else if(board[0][0]==1)
        cout << " X |";
    else
        cout << " O |";


    if(board[0][1]==0)
        cout<<"01 |";
    else if(board[0][1]==1)
        cout << " X |";
    else
        cout << " O |";


    if(board[0][2]==0)
        cout<<"02 ";
    else if(board[0][2]==1)
        cout << " X ";
    else
        cout << " O ";
 cout << endl;

    if(board[1][0]==0)
        cout<<"10 |";
    else if(board[1][0]==1)
        cout << " X |";
    else
        cout << " O |";


    if(board[1][1]==0)
        cout<<"11 |";
    else if(board[1][1]==1)
        cout << " X |";
    else
        cout << " O |";


    if(board[1][2]==0)
        cout<<"12 ";
    else if(board[1][2]==1)
        cout << " X ";
    else
        cout << " O ";
 cout << endl;

    if(board[2][0]==0)
        cout<<"20 |";
    else if(board[2][0]==1)
        cout << " X |";
    else
        cout << " O |";


    if(board[2][1]==0)
        cout<<"21 |";
    else if(board[2][1]==1)
        cout << " X |";
    else
        cout << " O |";


    if(board[2][2]==0)
        cout<<"22";
    else if(board[2][2]==1)
        cout << " X ";
    else
        cout << " O ";
         cout << endl;
}
//Done