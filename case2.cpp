#include<bits/stdc++.h>
using namespace std;

//  |O| 
// O|X| 
//  | | 

int case2(int board[3][3])
{
    int k=0;
    int m=0,n=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if((abs(i-j)==1) && (board[i][j]==10))
            {
                k++;
                m+=i;
                n+=j;
            }
            
        }
    }

    if(k==2)
        board[m-1][n-1] = 1;
    else if(k==1)
        return 0;

    return k;


}