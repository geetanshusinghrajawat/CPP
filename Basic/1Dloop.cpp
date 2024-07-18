#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a[100],size;
    cout<<"\n\n";
    cout<<"Enter the size: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Here : ";
        cin>>a[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout<<setw(3)<<a[i];
        if(i==size/2-1)
        {
            cout<<endl;
        }
    }
    cout<<"\nArray In reverse order";
    cout<<"\n";
    for (int i = size-1; i >= 0; i--)
    {
        cout<<setw(3)<<a[i];
        if(i==size/2)
        {
            cout<<endl;
        }
    }

    return 0;
}