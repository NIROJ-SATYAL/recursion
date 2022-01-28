#include<stdio.h>
#include<iostream>
using namespace std;
int fib (int n)
{
    if(n<=1)
    {
        return n;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}
int main()
{
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    cout<<endl<<fib(n);
    return 0;

}