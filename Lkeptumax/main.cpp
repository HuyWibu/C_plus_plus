#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int a[100005];
		int n,k;
		cin>>n>>k;
		for(int i=0 ; i<n ; i++)
			cin>>a[i];
		sort(a,a+n);
		int d=0;
		for(int i=n-1 ; i>=0 ; i--)
		{
			if(d<k)
			{
				cout<<a[i]<<" ";
				d++;
			}
		}
		cout<<endl;
	}
	return 0;
}
