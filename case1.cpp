#include <bits/stdc++.h>
using namespace std;

//  |O| 
//  |X| 
//  |O| 

int random()
{
    srand(time(NULL));
    int h = rand()%4;
    return h;
}
int case1(int board[3][3])
{
    int k=0;
    int sum = 21;

    // column
    int c = 0;

    for(int i=0;i<3;i++)
    {
        c+=board[i][1];
    }
    if(c==sum && board[1][1]==1)
    {
        int h2 = random();
        if(h2==0)
        board[0][0]= 1;
        else if(h2==1)
        board[0][2]= 1;
        else if(h2==2)
        board[2][0]= 1;
        else
        board[2][2]= 1;
        k++;
    }
    c=0;

    //row
    for(int j=0;j<3;j++)
    {
        c+=board[1][j];
    }
    if(c==sum && board[1][1]==1)
    {
        int h2 = random();
        if(h2==0)
        board[0][0]= 1;
        else if(h2==1)
        board[0][2]= 1;
        else if(h2==2)
        board[2][0]= 1;
        else
        board[2][2]= 1;
        k++;
    }

    return k;
}

//Done