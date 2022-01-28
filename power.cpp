#include<stdio.h>
#include<iostream>
using namespace std;
int power(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return power(m,n-1)*m;//recursion call at returning time 
    }
}
int main()
{
 int m,n;
 cout<<"enter the value of m and n:"<<endl;
 cin>>m>>n;

 cout<<m<<"^"<<n<<"="<<power(m,n)<<endl;
 return 0;
}
