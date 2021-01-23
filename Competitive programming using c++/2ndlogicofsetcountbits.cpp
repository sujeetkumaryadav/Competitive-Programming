#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int setbits=0;
while(n!=0)
{
if((n & 1)==1)
         setbits++;
n=n>>1;
}
cout<<setbits;
}
