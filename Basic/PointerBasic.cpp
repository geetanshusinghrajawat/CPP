#include<iostream>
using namespace std;
int main()
{
    //pointer data type se same hota h
    //int variable h toh pointer bhi variable hee hoga
    int a;
    int *p1;

    char c;
    char *p2;

    double d;
    double *p3;

    p1=&a;
    a=5;
    cout<<p1<<endl;
    cout<<*p1<<endl;
    cout<<&a<<endl;
    cout<<&p1<<endl;
    cout<<"Before derefrencing:"<<a<<endl;
    *p1=10;
    cout<<"After derefrencing:"<<a<<endl;
    cout<<"Adderess for p+1 is:"<<&p1+1<<endl;

    p2=&c;
    
    p3=&d;

    return 0;
}