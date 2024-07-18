#include<iostream>
using namespace std;
int main()
{
    int n,i=0;
    cout<<"Enter the number of time you want to print:"<<endl;
    cin>>n;
    while(i<n)
    {
        cout<<"We are at Index number:"<<i<<endl;
        i++;
    }
    cout<<"Current i position:"<<i;
    return 0;
}