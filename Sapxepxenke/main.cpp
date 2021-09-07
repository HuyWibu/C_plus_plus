#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[100005],b[100005];
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int k=0;
		for(int i=1 ; i<n ; i+=2)
		{
			b[i]=a[k];
			k++;
		}
		int l=n-1;
		for(int i=0 ; i<n ; i+=2)
		{
			b[i]=a[l];
			l--;
		}
		for(int i=0 ; i<n ; i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
