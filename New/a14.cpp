#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    for(int row = 0 ; row < 6 ; row++)
    {
        for(int col = 0 ; col < 6 ; col++)
        {
            if(row == 0 || row == 5)
            {
                cout<<"*";
            }
            else 
            {
                if(col == 0 || col == 5)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0 ;
}