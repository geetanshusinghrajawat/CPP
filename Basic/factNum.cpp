#include<iostream>
using namespace std;
int main()
{
    int A,temp=1,i;
    cout<<"Hello"<<endl;
    cout<<"Enter the value of A: ";
    cin>>A;
    for (i = A; i > 1; i--)
    {
        temp=temp*i;
    }
    cout<<"Fact of Number is: "<<temp;
    return 0;
}