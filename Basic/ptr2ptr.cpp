#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int *p=&x;
    *p=6;
    int **q=&p;
    int ***r=&q;
    cout<<x<<"---"<<&x<<endl;
    cout<<*p<<"---"<<&p<<endl;
    cout<<*q<<"---"<<q<<"---"<<**q<<endl;
    cout<<*r<<"---"<<r<<"---"<<***r<<endl;
    ***r=10;
    cout<<"Changeeee"<<endl;
    cout<<x<<"---"<<&x<<endl;
    cout<<*p<<"---"<<p<<endl;
    cout<<*q<<"---"<<q<<"---"<<**q<<endl;
    cout<<*r<<"---"<<r<<"---"<<***r<<endl;
}