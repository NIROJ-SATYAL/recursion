#include<stdio.h>
#include<iostream>
using namespace std;
int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    
    else{
        return n*fact(n-1);//recursion at calling time i.e 5*4*3*2*1
    }
}
int main()
{
    int n;
    cout<<"enter the number to calculate the factorial :"<<endl;
    cin>>n;
    cout<<fact(n);
    return 0;
}