#include<iostream>
using namespace std;

void reverse(int n)
{
    int rev=0;
    while(n)
    {
        int rem = n%10;
        n = n/10;
        rev = rev * 10 +rem;
    }
    cout<<rev;
}

int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    reverse(n);
}