#include<bits/stdc++.h>
#include"show.cpp"
using namespace std;

int checking(int check,int board[3][3])
{
    if(check==1)
    {
        show(board);
        cout<<"\nAI has won the match.Hahaha.Loser" << endl;
        return 0;
    }
    else if(check == 10)
    {
        show(board);
        cout << "\nUSER has won the match" << endl;
        return 0;
    }
    else
    {
        return 1;
    }

    return 0;
}

// DONE