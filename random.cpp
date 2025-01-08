#include<bits/stdc++.h>
using namespace std;
int main ()
{
    /*srand(time(NULL));
    int h = rand()%4;
    cout<<h<<endl;
    return 0;*/
    int testboard[3][3]={10,1,0,0,10,0,10,0,1};
    int k=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(testboard[i][j]==0)
            {
                //testboard[i][j]=1;
                cout<<i<<j<<endl;
                k++;
                break;
            }
        }
        if(k==1)
        break;
    }
}