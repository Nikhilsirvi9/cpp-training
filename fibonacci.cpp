#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;

    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++)
    {
       arr[i]=arr[i-2]+arr[i-1];
    }

    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}