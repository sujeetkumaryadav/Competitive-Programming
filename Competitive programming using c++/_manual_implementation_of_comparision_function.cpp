//Manual Implementation of Comparision function
#include<iostream>
using namespace std;
bool compare(int a,int b)
{
         cout<<"Comparing "<<a<<"and "<<b<<endl;
         return a<b;
}

void bubble_sort(int arr[],int n,bool (*cmp) (int a,int b))
{
for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-1;j++)
{
         if(cmp(arr[j],arr[j+1]))
 {
         swap(arr[j],arr[j+1]);
 }
}
}
}
int main()
{
int n;
cout<<"Enter Size of Array:";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
bubble_sort(arr,n,compare);
for(int i=0;i<n;i++)
         cout<<arr[i]<<" ";
}
