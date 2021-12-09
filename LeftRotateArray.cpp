
left rotatation of array-->

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void rotateArray(int arr[],int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,n;
        int a[1001];
        cin>>r>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        while(r--)
        {
            rotateArray(a,n);
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
