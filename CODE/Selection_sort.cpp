#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n-1;i++)
	{
		int mi=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[mi])
			{
				mi=j;
			}
		}
		swap(arr[mi],arr[i]);
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}