#include<bits/stdc++.h>
using namespace std;

int k = 0;
void lmove(int board[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(board[i][j]==0)
            {
                board[i][j]=1;
                k++;
                break;
            }
        }
        if(k==1)
            break;
    }
}

//Done