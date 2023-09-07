#include<iostream>
using namespace std;
int main()
{
    for(int row =0 ; row < 6 ; row++)
    {
        for(int col = 0 ; col < 6 - row; col++)
        {
            if(row == 0 || row == 5)
            {
                cout<<col+1;
            }
            else
            {
                if( col == 0 || col == 6-row-1 )
                {
                    cout<<col+1;
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