#include<iostream>
using namespace std;

void check(int n)
{
    int max = INT_MIN;
    while(n)
    {
        int r = n%10;
        n = n/10;
        if(r>max)
        max=r;
    }
    cout<<max;
}

int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;

    check(n);
}