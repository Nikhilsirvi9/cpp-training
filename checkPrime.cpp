#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
int f=true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        f=false;
    }
    
    f ?cout<<"prime number":cout<<"not a prime number";
}