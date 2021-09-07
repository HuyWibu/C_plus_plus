#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int a[10005]={0};
		int n,x;
		cin>>n>>x;
		long long xMUi=1;
		for(int i=n-1 ; i>=0 ; i--)
		{
			cin>>a[i];
		}
		long long kq=a[0];
		for(int i=1 ; i<n ; i++)
		{
			xMUi=(xMUi*x)%1000000007;
			kq+=a[i]*xMUi;
		}
		if(kq>1000000007)
		{
			kq%=1000000007;
		}
		cout<<kq<<endl;
	}
	return 0;
}
