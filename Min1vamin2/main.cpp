#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t ;
	cin>>t;
	while(t--)
	{
		int a[100005];
		int n;
		cin>>n;
		for(int i=0 ; i<n ; i++)
			cin>>a[i];
		sort(a,a+n);
		int dem=0;
		for(int i=0 ; i<n-1 ; i++)
		{
			for(int j=i+1 ; j<n ; j++)
			{
				if(a[i]==a[j])	dem++;
			}
			break;
		}
		if(dem==n-1)
			cout<<"-1";
		else
		{
			cout<<a[0]<<" ";
			for(int i=1 ; i<n ; i++)
			{
				if(a[i]!=a[0])
				{
					cout<<a[i];
					break;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
