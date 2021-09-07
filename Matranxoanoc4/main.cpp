#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[1005]={0};
	int b[50][50]={0};
	for(int i=0 ; i<n*n ; i++)
		cin>>a[i];
	sort(a,a+n*n);
	int k=0;
	for(int i=0 ; i<=(n/2)-1 ; i++)
	{
		for(int j=i ; j<n-i ; j++)
		{
			b[i][j]=a[k];
			k++;
		}
		for(int j=i+1 ; j<n-i ; j++)
		{
			b[j][n-i-1]=a[k];
			k++;
		}
		for(int j=n-i-2 ; j>=i ; j--)
		{
			b[n-i-1][j]=a[k];
			k++;
		}
		for(int j=n-i-2 ; j>i ; j--)
		{
			b[j][i]=a[k];
			k++;
		}
	}
	if(n%2!=0) b[n/2][n/2]=a[k];
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
