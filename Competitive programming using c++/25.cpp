#include<iostream>
using namespace std;
int main()
{
char st[100];
cout<<"Enter Your name:";
cin.getline(st,100);
cout<<"Welcome "<<st<<endl;
cin.ignore();
cout<<"Enter Your Name Again";
cin.getline(st,100);
cout<<"Welcome "<<st<<endl;
}
