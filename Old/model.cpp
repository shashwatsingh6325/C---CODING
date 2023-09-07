#include<iostream> 
using namespace std; 
class Complex{ 
 public: 
 int r1,i1,r2,i2,r3,i3; 
 Complex(){cin>>r1>>i1;cin>>r2>>i2;} 
 void addcomplex(){ 
 r3=r1+r2; 
 i3=i1+i2; 
 } 
 void displaycomplex(){ 
 cout<<r1<<"+"<<i1<<"i"<<endl; 
 cout<<r2<<"+"<<i2<<"i"<<endl; 
 cout<<r3<<"+"<<i3<<"i"<<endl; 
 } 
}; 
int main(){ 
 Complex calculate; 
 calculate.addcomplex(); 
 calculate.displaycomplex(); 
 return 0; 
}