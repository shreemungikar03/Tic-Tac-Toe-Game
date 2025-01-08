#include <bits/stdc++.h>
using namespace std;

int win(int board[3][3])
{
    int sum = 0;
    // for checking row
    for (int i = 0; i < 3; i++)
    {
        sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum += board[i][j];
        }
        if (sum == 30)
        {
            return 10;
        }
        else if (sum == 3)
        {
            return 1;
        }
    }

    // for checking columns
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += board[j][i];
        }
        if (sum == 30)
        {
            return 10;
        }
        else if (sum == 3)
        {
            return 1;
        }
    }

    // for checking diagonals

        // for checking principal diagonaL
        sum=0;
        for (int i = 0; i < 3; i++)
        {
            //sum = 0;
            for (int j = 0; j < 3; j++)
            {
                if(i==j)
                    sum += board[i][j];
            }
            if (sum == 30)
            {
                return 10;
            }
            else if (sum == 3)
            {
                return 1;
            }
        }

        // for checking off diagonaL
        sum=0;
        for (int i = 0; i < 3; i++)
        {
            //sum = 0;
            for (int j = 0; j < 3; j++)
            {
                if((i+j)==2)
                    sum += board[i][j];
            }
            if (sum == 30)
            {
                return 10;
            }
            else if (sum == 3)
            {
                return 1;
            }
        }
    return 0; // game continue
}

// DONE