#include<iostream>
using namespace std;
int main()
{
    int n ;
    int arr[100] = {0};
    cout<< "entre the number of students :";
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<100;i++)
    {
        cout<<arr[i]<<",";
    }


    return 0;
}