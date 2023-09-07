#include <iostream>
#include <conio.h>
using namespace std;
class A                       // A is the created class
{
public:
    int a = 1, b = 2, c = 3;
    void show()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
};
int main()
{
    A obj;                    // obj is the object created for the class A
    obj.show();
    return 0;
}