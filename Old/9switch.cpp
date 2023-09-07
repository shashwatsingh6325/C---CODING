#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Entre the our age";
    cin>>age;
    switch(age)
    {
        case 18 :
        {
            cout<<"you are 18";
            break;
        }
        case 22 :
        {
            cout<<"you are 22";
            break;
        }
        default :
        {
            cout<<"fuck you"<<endl;
        }
    }
    return 0;
}