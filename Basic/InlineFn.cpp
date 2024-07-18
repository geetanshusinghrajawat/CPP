#include<iostream>
using namespace std;
inline int square(int n)
{
    return n*n;
}

int main()
{
    int s;
    cout<<"\n\nEnter Number for Square : ";
    cin>>s;
    cout<<"Square of "<<s<<" is "<<square(s);
}