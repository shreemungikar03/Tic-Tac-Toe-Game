#include<bits/stdc++.h>

using namespace std;

void fmove(int board[3][3],int move)
{  
    if(move!=11)
    {
        board[1][1]= 1;
    }
    else
    {
        //board[0][0]= 1;
        srand(time(NULL));
        int h = rand()%4;

        if(h==0)
        board[0][0]= 1;
        else if(h==1)
        board[0][2]= 1;
        else if(h==2)
        board[2][0]= 1;
        else
        board[2][2]= 1;

    }
}

//Done