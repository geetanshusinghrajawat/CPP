#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int rem,temp,r,sum=0;
    cout<<"Enter Number: "<<endl;
    cin>>rem;
    temp=rem;
    while (rem>0)
    {
        r=rem%10;
        sum=sum+(r*r*r);
        rem=rem/10;
    }
    if (temp==sum)
    {
        cout<<"It is an armstrong number";
    }
    else
    cout<<"It is not an armstrong number";        
}