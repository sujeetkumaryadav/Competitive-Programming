#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int R,C,sum=0,SUM=0,found=1;
	    cin>>R>>C;
	    int arr[1000][1000];
	    for(int row=0;row<R;row++)
	    {
	        for(int col=0;col<C;col++)
	        {
	            cin>>arr[row][col];
	        }
	    }
	      for(int row=0;row<R;row++)
	    {
	        for(int col=0;col<C;col++)
	        {
	            sum=sum+arr[row][col];
	            SUM=SUM+arr[col][row];
	        }
	           if(sum==SUM)
	           {
	               cout<<"Yes"<<endl;
	               found=0;
	               break;
	           }
	        }
	    if(found==1)
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}