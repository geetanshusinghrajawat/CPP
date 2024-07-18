#include<iostream>
using namespace std;
int main()
{
    int A,B;
    cout<<"Hello"<<endl;
    cout<<"Enter the value of A: ";
    cin>>A;
    cout<<"Enter The value of B: "<<endl;
    cin>>B;
    cout<<"before swap"<<endl;
    cout<<"value of A is: "<<A<<endl;
    cout<<"value of B is: "<<B<<endl;
    A=A+B;
    B=A-B;
    A=A-B;
    cout<<"After swap"<<endl;
    cout<<"value of A is: "<<A<<endl;
    cout<<"value of B is: "<<B<<endl;
    return 0;
}