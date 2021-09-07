#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n+2];
		for(int i=0 ; i<n ; i++)
			cin>>a[i];
		int dem=0;
		for(int i=0 ; i<n-1 ; i++)
		{
			for(int j=i+1 ; j<n ; j++)
			{
				if((a[i]+a[j])==k)
				dem++;
			}
		}
		cout<<dem<<'\n';
	}
	return 0;
}
