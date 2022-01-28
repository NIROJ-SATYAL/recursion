#include<stdio.h>
#include<iostream>
using namespace std;
int sum(int n)
{
   
    if(n==0)
    {
        return 0;
    }
    else 
    {
        return n+sum(n-1);
    }
}
int main()
{
    int n;
    cout<<"enter the natural nunmber:"<<endl;
    cin>>n;
    cout<<"sum of"<<n<<" natural number is:"<<sum(n)<<endl;
    return 0;
}