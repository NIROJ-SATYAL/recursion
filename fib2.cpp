#include<stdio.h>
#include<iostream>
using namespace std;
int fib(int n)
{
    int t0=0,t1=1,i,s;
    if(n<=1)
    {
        return n;
    }
    else
    {
        for(i=2;i<=n;i++)
        {
            s=t0+t1;
            t0=t1;
            t1=s;
        }
        return s;
    }
}
int main()
{
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    cout<<fib(n);
    return 0;
}