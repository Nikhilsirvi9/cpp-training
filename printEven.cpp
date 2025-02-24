#include<iostream>

using namespace std;

int main()
{
    cout<<"enter the number";
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        cout<<i<<" ";
    }
}