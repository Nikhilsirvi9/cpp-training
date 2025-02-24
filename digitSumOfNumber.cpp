#include<iostream>
using namespace std;

void total(int n)
{
    int sum;
    while(n)
    {
        int r = n%10;
        n = n/10;
        sum+=r;
    }
    cout<<sum;
}

int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    total(n);
}