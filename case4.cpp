#include<bits/stdc++.h>
using namespace std;

//  | |O 
//  |X| 
// O| | 

int random4()
{
    srand(time(NULL));
    int h = rand()%4;
    return h;
}

int case4(int board[3][3])
{
    int k=0;
    const int sum=21;
    int c=0;

    //Diagonal 1
    for(int p=0;p<3;p++){
        c+=board[p][p];
    }
    if(c==sum && board[1][1]==1){

        int h=random4();
        if(h==0)
        board[0][1]= 1;
        else if(h==1)
        board[1][2]= 1;
        else if(h==2)
        board[2][1]= 1;
        else
        board[1][0]= 1;
        k++;
    }
    c=0;

    //Diagonal 2
    for(int p=0;p<3;p++){
        c+=board[p][2-p];
    }
    if(c==sum && board[1][1]==1){
        int h=random();
        if(h==0)
        board[0][1]= 1;
        else if(h==1)
        board[1][2]= 1;
        else if(h==2)
        board[2][1]= 1;
        else
        board[1][0]= 1;
        k++;
    }

    return k;
    
}