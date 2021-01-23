#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a,b,c;
float roots1,roots2;
cout<<"Enter a,b and c value:";
cin>>a>>b>>c;
roots1=(-b+sqrt(b*b-4*a*c))/2;
roots2=(-b-sqrt(b*b-4*a*c))/2;
cout<<"Roots of Quadratic Equation is:"<<endl;
cout<<roots1<<"  "<<roots2;
return 0;
}
