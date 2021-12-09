
taking largest factor :3 passesd

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool isprime(int n)
{
    int flag=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int fact(int n)
{
    int f;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
          f=i;
        }
    }
    return f;
}

int main() 
{
    int t;
    int n;
    cin>>t;
    int arr[1001];
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count=0;
        while(1)
        {
            count++;
            int i=0;
            for(i=0;i<n;i++)
            {
                if(!isprime(arr[i]))
                {
                    arr[i]=fact(arr[i]);
                    break;
                }
            }
            if(i==n)
            {
                if(count%2==0)
                {
                    cout<<"A"<<endl;break;
                }
                else
                {
                    cout<<"B"<<endl;break;
                }
            }
        }
    }
    return 0;
}




taking smallest factor :2 passed
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool isprime(int n)
{
    int flag=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int fact(int n)
{
    int f;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
          f=i;break;
        }
    }
    return f;
}

int main() 
{
    int t;
    int n;
    cin>>t;
    int arr[1001];
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count=0;
        while(1)
        {
            count++;
            int i=0;
            for(i=0;i<n;i++)
            {
                if(!isprime(arr[i]))
                {
                    arr[i]=fact(arr[i]);
                    break;
                }
            }
            if(i==n)
            {
                if(count%2==0)
                {
                    cout<<"A"<<endl;break;
                }
                else
                {
                    cout<<"B"<<endl;break;
                }
            }
        }
    }
    return 0;
}

