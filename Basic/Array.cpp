#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"Enter the value of array at index:"<<i<<endl;
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}