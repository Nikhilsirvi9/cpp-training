#include<iostream>
using namespace std;

int reverse(int n)
{
    int rev=0;
    while(n)
    {
        int rem = n%10;
        n = n/10;
        rev = rev * 10 +rem;
    }
    return rev;
}

int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int rev = reverse(n);

    (n==rev)? cout<<"Is is Palindrome" : cout<<"It's not Palindrome";
}