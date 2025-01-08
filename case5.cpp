#include<bits/stdc++.h>
using namespace std;

// X| | 
//  |O| 
//  | |O 

int case5(int board[3][3])
{
    int k=0;
    int sum=21;
    int c=0;

    //Diagonal 1
    for(int p=0;p<3;p++){
        c+=board[p][p];
    }
    if(c==sum && board[1][1]==10){
        board[0][2]=1;
        k++;
    }
    c=0;

    //Diagonal 2
    for(int p=0;p<3;p++){
        c+=board[p][2-p];
    }
    if(c==sum && board[1][1]==10){
        board[0][0]=1;
        k++;
    }

    return k;
    
}