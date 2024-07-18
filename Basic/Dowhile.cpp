#include<iostream>
using namespace std;
int main()
{
    int n,i=0;
    cout<<"Enter n value: ";
    cin>>n;
    do
    {
        cout<<"We are at index number"<<i<<endl;
        i=i+1;
    } while (i<n);
    
    return 0;
}