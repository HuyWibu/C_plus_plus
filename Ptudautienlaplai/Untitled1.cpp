#include <iostream>
using namespace std;
int check(int a[],int m, int n)
{
	int check=0;
	for(int i=m+1 ; i<n-1 ; i++)
	{
		for(int j=i+1 ; j<n ; j++)
		{
			if(a[i]==a[j])
			{
				check=1;
				return 0;
			}
		}
		if(check==1) return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[100005];
		int n;
		int d=0;
		cin>>n;
		for(int i=0 ; i<n ; i++)
			cin>>a[i];
		for(int i=0 ; i<n-1 ; i++)
		{
			for(int j=i+1 ; j<n ; j++)
			{
				if(a[i]==a[j]&&check(a,i,j))
				{
					d=1;
					cout<<a[i]<<endl;
					break;
				}
			}
			if(d==1)
				break;
		}
		if(d==0)
			cout<<"-1\n";
	}
	return 0;
}
