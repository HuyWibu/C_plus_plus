#include<bits/stdc++.h> 
using namespace std; 
int main()
{ 
	int t; 
	cin>>t; 
	while(t--)
	{ 
		int n; 
		cin>>n; 
		int a[n+2]; 
		int b[12]={0};
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
			long long u=a[i];
			while(u)
			{
				b[u%10]=1;
				u/=10;
			}
		}
		for(int i=0 ; i<10 ; i++)
		{
			if(b[i]==1)
			{
				cout<<i<<' ';
			}
		}
		cout<<endl; 
	} 
}
