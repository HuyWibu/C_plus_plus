#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n+2],b[m+2];
		for(int i=0 ; i<n ; i++)
			cin>>a[i];
		for(int i=0 ; i<m ; i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+m);
		long long k=a[n-1];
		long long l=b[0];
		long long u=k*l;
		cout<<u<<endl;
	}
	return 0;
}
