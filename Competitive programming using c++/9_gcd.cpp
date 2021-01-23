#include<iostream>
using namespace std;
int main()
{
int m,n;
cout<<"Enter any two numbers:"<<endl;
cin>>m>>n;
while(m!=n)
{
if(m>n)
         m-=n;
else
         n-=m;
}
cout<<"GCD is: "<<m;
return 0;
}
