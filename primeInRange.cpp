#include<iostream>
using namespace std;

bool checkPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return false;
    }

    return true;
}

int main()
{
    int n;
    cout<<"enter the range from 2 to :";
    cin>>n;
    if(n==0 || n==1)
    cout<<"sorry there no prime found within your range";

    for(int i=2;i<=n;i++)
    {
        if(checkPrime(i))
        cout<<i<<" ";
    }
}