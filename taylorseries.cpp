#include<stdio.h>
#include<iostream>
using namespace std;
double e(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
    {
        return 1;
    }
    else
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main()
{
    int n,x;
    cout<<"enter the value of x and n:"<<endl;
    cin>>x>>n;
   
    cout<<e(x,n);
    return 0;
}