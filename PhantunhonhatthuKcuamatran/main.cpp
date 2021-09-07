#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int a[100][100]={0};
		int b[100005]={0};
		int n,k;
		cin>>n>>k;
		int x=0;
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<n ; j++)
			{
				cin>>a[i][j];
				b[x]=a[i][j];
				x++;
			}
		}
		sort(b,b+x);
		cout<<b[k-1]<<endl;
	}
	return 0;
}
