#include<iostream>
using namespace std;
int main()
{
    int hoursCond,hoursAbs,perAtten = 0,oldCond;
    cout<<"Entre the Number of Hours Conducted:";
    cin>>hoursCond;
    cout<<"Entre the Number of Hours Absent:";
    cin>>hoursAbs;
    oldCond=hoursCond;
    while(perAtten < 75)
    {
        perAtten = ((hoursCond-hoursAbs)*100)/hoursCond;
        hoursCond=hoursCond+1;
    }
    cout<<"Required Hours :";
    cout<<hoursCond-oldCond;
    return 0 ;
}