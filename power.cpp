#include<stdio.h>
#include<iostream>
using namespace std;
int power(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0){
        return power(m*m,n/2); 
    }
    else{
        return m*power(m*m,(n-1)/2);
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
