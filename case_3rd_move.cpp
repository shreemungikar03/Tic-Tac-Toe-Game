#include<bits/stdc++.h>
using namespace std;

// void increment(int &c, int &t, int sum){
//     if(c==sum) t++;
//     c=0;
// }

int case_3rd_move(int board[3][3]) {
    int sum=1;

// row

    int c=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c+=board[i][j];
        }

        if(c==sum){
            for(int j=0;j<3;j++){
                if(board[i][j]==0) {
                    return ((i*10)+j);
                    break;}
            }
        }
        c=0;
    }

// column

    c=0;
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            c+=board[i][j];
        }

        if(c==sum){
            for(int i=0;i<3;i++){
                if(board[i][j]==0) {
                    return ((i*10)+j);
                    break;}
            }
        }
        c=0;
    }

// diagonal

    c=0;
    for(int p=0;p<3;p++){
        c+=board[p][p];
    }
    if(c==sum){
        for(int p=0;p<3;p++){
            if(board[p][p]==0){
                 return ((p*10)+p);
                 break;}
        }
    }
    c=0;

    c=0;
    for(int p=0;p<3;p++){
        c+=board[p][2-p];
    }
    if(c==sum){
        for(int p=0;p<3;p++){
            if(board[p][2-p]==0) {
                return ((p*10)+(2-p));
                break;}
        }
    }
    c=0;

    return -1;
}