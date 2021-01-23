#include<iostream>
using namespace std;
int main()
{
int x=10;
int &y=x;
cout<<"x="<<x<<endl;
y++;
x++;
cout<<&x<<" "<<&y<<endl;
cout<<"y="<<y;
}
