#include<iostream>
using namespace std;
int main()
{
void *p= new float(5.6);
cout<<p<<endl;
cout<<*(float*)p;
}
