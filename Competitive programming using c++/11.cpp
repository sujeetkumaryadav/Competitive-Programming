#include<iostream>
using namespace std;
int main()
{
int A[]={2,9,4,0,1,23,21};
int n=sizeof(A)/sizeof(A[0]);
int max,sum=0;
max=A[0];
for(int i=1;i<n;i++)
{
if(max<  A[i])
         max=A[i];
}
cout<<max;
}

