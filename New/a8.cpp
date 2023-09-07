#include<iostream>
using namespace std;
int main()
{
    unsigned totalhours,abs,oldpres,req,newpres,reqhours;
    cout<<"Total Number of Hours Conducted :";
    cin>>totalhours;
    cout<<"Total Number of Hours Absent :";
    cin>>abs;
    oldpres = totalhours-abs;
    req = 0;
    while(req < 75);
    {
        req = (newpres/totalhours)*100;
        totalhours = totalhours + 1;
        newpres = oldpres + 1;
    }
    reqhours = oldpres - newpres;
    cout<<"Number of Hours required :";
    cout<<reqhours;
    return 0;
}