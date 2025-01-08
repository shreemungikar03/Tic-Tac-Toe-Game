#include<bits/stdc++.h>
#include"display.cpp"
#include"updategrid.cpp" 
#include"firstmove.cpp"
#include"lastmove.cpp"
#include"caseAbot.cpp"
#include"caseAuser.cpp"
#include"win.cpp" 
#include"checking.cpp"
#include"case1.cpp"
#include"case2.cpp"
#include"case4.cpp"
#include"case5.cpp"
#include"case_3rd_move.cpp"


using namespace std;

int board[3][3]={0,0,0,0,0,0,0,0,0};
int testBoard[3][3]={10,1,0,0,10,0,10,0,1};

int input()
{
    int move;
    cout << endl;
    display(board);
    cout << endl << "Enter your move " << endl;
    cin >> move;
    return move;
}

int main ()
{
    int move;
    string en;
    move = input();
    updategrid(board, move, 'o');
    cout << endl;
    display(board);

    fmove(board,move);
    cout << endl;

    cout << "Your move over. Press Enter.." << endl;

    // Clear the newline character from the buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    getline(cin, en); // This will wait for the user to press Enter

    //display(board);

    /*int check = win(board); //NEW
    int check2 = checking(check);
    if(check2==0)
    {
        return 0;
    }*/

                    // WRITE THIS CODE ONLY FOR LASTMOVE CHECKING
                    // else if(check==1)
                    // {
                    //     cout << "The match is a DRAW" << endl;
                    // }


    /*cout<<endl;
     display(testBoard);
     int temp=caseAbot(testBoard);
     cout<<temp;
     cout<<endl;
     updategrid(testBoard,temp,'x');
     display(testBoard);
     int temp2 = caseAuser(testBoard);
     cout<<temp2<<endl;
     updategrid(testBoard,temp2,'x');
     display(testBoard);*/


     //Second Move
    int move2;
    string en2;
    move2 = input();
    updategrid(board, move2, 'o');
    cout << endl;
    display(board);

    cout << "Your move over. Press Enter.." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, en2);

    //AI 2nd move->
    
        int temp2=caseAuser(board);
        //cout<<temp2<<endl;
        if(temp2!=-1)
        updategrid(board,temp2,'x');

        
        else 
        {
            int c1 = case1(board);
            if(c1==0)
            {
                int c2 = case2(board);
                if(c2==0)
                {
                    int c4 = case4(board);
                    if(c4==0)
                    {
                        int c5 = case5(board);
                        if(c5==0)
                        lmove(board);
                    }
                    
                }
            }
        }
    
    //Third move
    int move3;
    string en3;
    move3 = input();
    updategrid(board, move3, 'o');
    cout << endl;
    display(board);

    cout << "Your move over. Press Enter.." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, en3);

    //AI 3rd move->
    int check1 = win(board);
    int check2 = checking(check1,board);
    //cout<<check1<<" "<<check2<<endl;
    if(check2==0)
    {
        //display(board);
        return 0;
    }

    if(check2==1)
    {
         int temp3=caseAbot(board);
         
        if(temp3!=-1)
        {
            updategrid(board,temp3,'x');
        }
        else
        {
            int temp4=caseAuser(board);
            //cout<<temp4<<endl;
            if(temp4!=-1)
            updategrid(board,temp4,'x');
            
            else
            {
                int change = case_3rd_move(board);   
                updategrid(board,change,'x');

                if(change==-1)
                lmove(board);
            }
        }

    }
    
    //display(board);
    check1 = win(board);
    check2 = checking(check1,board);
    //cout<<check1<<" "<<check2<<endl;
    if(check2==0)
    {
        return 0;
    }
    
    //Fourth move
    if(check2==1)
    {
    int move4;
    string en4;
    move4 = input();
    updategrid(board, move4, 'o');
    cout << endl;
    display(board);

    cout << "Your move over. Press Enter.." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, en4);
    }

    //AI Fourthmove->
    check1 = win(board);
    check2 = checking(check1,board);
    //cout<<check1<<" "<<check2<<endl;
    if(check2==0)
    {
        return 0;
    }
    if(check2==1)
    {
         int temp5=caseAbot(board);
         
        if(temp5!=-1)
        {
            updategrid(board,temp5,'x');
        }
        else
        {
            int temp6=caseAuser(board);
            //cout<<temp4<<endl;
            if(temp6!=-1)
            updategrid(board,temp6,'x');
            
            else
            {
                lmove(board);
            }
        }

    }
    check1 = win(board);
    check2 = checking(check1,board);
    //cout<<check1<<" "<<check2<<endl;
    if(check2==0)
    {
        return 0;
    }
    //display(board);

    //User last move
    if(check2==1)
    {
    int move5;
    //string en5;
    move5 = input();
    updategrid(board, move5, 'o');
    cout << endl;
    }

    display(board);
    cout<<endl;
    check1 = win(board);
    check2 = checking(check1,board);
    if(check2==0)
    {
        return 0;
    }
    if(check2==1)
    {
        cout << "The match is a DRAW" << endl;
    }  
    return 0;
}






    // try
    // {
    //     if(move!=00|| move!=01 || move!=02|| move!=10 || move!=11|| move!=12 || move!=20|| move!=21 || move!=22 )
    //         throw move;
    // }
    // catch(int)
    // {
    //     cout << "Invalid Input" << endl;
