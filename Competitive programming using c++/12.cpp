#include<iostream>
using namespace std;
int main()
{
int size;
cout<<"Enter Array size:"<<endl;
cin>>size;
int *p=new int[size];
cout<<"enter array elements:"<<endl;
for(int i=0;i<size;i++)
cin>>p[i];
cout<<"Array elements are:"<<endl;
for(int i=0;i<size;i++)
cout<<p[i]<<" ";
delete []p;
p=NULL;
return 0;
}
