#include<iostream>
using namespace std;
int main()
{
    int month;
    cout<<"entre the month(1-12)";
    cin>>month;
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    cout<<"no of days : 31 days";
    else if( month==2)
    cout<<"no of days : 28";
    else if ( month ==2 || month==4 || month==6 || month==9 || month==11)
    cout<<"no of days : 30";
    return 0;

}