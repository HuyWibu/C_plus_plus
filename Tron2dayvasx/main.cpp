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
		int p=m+n+2;
		int a[n+2],b[m+2],c[p];
		int d=0;
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
			c[d]=a[i];
			d++;
		}	
		for(int i=0 ; i<m ; i++)
		{
			cin>>b[i];
			c[d]=b[i];
			d++;
		}
		sort(c,c+d);
		for(int i=0 ; i<d ; i++)
			cout<<c[i]<<' ';
		cout<<endl;
	}
	return 0;
}
