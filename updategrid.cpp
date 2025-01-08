#include<bits/stdc++.h>
using namespace std;

void updategrid(int board[3][3], int move, char z)
{
    if(move==0){
        if(z=='o') board[0][0]=10;
        else board[0][0]=1;
    }
    else if(move==1){
        if(z=='o') board[0][1]=10;
        else board[0][1]=1;
    }
    else if(move==2){
        if(z=='o') board[0][2]=10;
        else board[0][2]=1;
    }
    else if(move==10){
        if(z=='o') board[1][0]=10;
        else board[1][0]=1;
    }
    else if(move==11){
        if(z=='o') board[1][1]=10;
        else board[1][1]=1;
    }
    else if(move==12){
        if(z=='o') board[1][2]=10;
        else board[1][2]=1;
    }
    else if(move==20){
        if(z=='o') board[2][0]=10;
        else board[2][0]=1;
    }
    else if(move==21){
        if(z=='o') board[2][1]=10;
        else board[2][1]=1;
    }
    else if(move==22){
        if(z=='o') board[2][2]=10;
        else board[2][2]=1;
    }
}

//Done