problem  1:

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

int main() 
{
    int n,th;
    cin>>n;
    while(n--)
    {
        cin>>th;
        int total_power=0;
        for(int i=2;i<=th;i++)
        {
            if(isprime(i)&&isprime(2*i+1))
            {
                total_power+=i;
            }
        }
        cout<<total_power<<endl;
    }
    return 0;
}
