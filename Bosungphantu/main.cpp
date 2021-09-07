#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[100005];
		int b[100005]={0};
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
			b[a[i]]=1;
		}
		sort(a,a+n);
		int dem=0;
		int left=a[0];
		int right=a[n-1];
		for(int i=left ; i<=right ; i++)
		{
			if(b[i]==0) dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}
