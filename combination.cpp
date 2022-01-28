#include<stdio.h>
#include<iostream>
using namespace std;
int combination(int n,int r)
{
    if(r==0||n==r)
    {
        return 1;
    }
    else{
        return combination(n-1,r-1)+combination(n-1,r);
    }
}
int main()
{
    int n,r;
    int make=true;
    while(make)
    {
    cout<<"enter the value of n an r:"<<endl;
    cin>>n>>r;
    if(n<r)
    {
        cout<<"r cannot be greater than n:"<<endl;
    }
    else
    {
        make=false;
    }
    }
    cout<<endl;
    cout<<"combination of n("<<n<<") and r("<<r<< ") is:"<<combination(n,r);
    return 0;
}