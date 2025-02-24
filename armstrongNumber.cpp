#include<iostream>
using namespace std;

int count(int n)
{
    int c=0;
    while(n)
    {
        n = n/10;
        c++;
    }
    return c;
}

int pow(int r,int c)
{
    int mul=1;
    for(int i=1;i<=c;i++)
    {
        mul = mul*r;
    }
    return mul;
}

int checkArmstrong(int n,int c)
{
    int sum = 0;
    while(n)
    {
        int r = n%10;
        int p = pow(r,c);
        sum += p;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;

    int c = count(n);

    int arm = checkArmstrong(n,c);

    (arm==n)?cout<<"yes":cout<<"no";
}