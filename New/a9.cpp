#include<iostream>
using namespace std;
int main()
{
    int row , col;
    for(row = 0 ; row < 5 ; row++)
    {
        for(col = 0 ; col < row + 1 ; col++ )
        {
            cout<<col+1;
        }
        cout<< endl;
    }
    cout<<endl;
    return 0;
}