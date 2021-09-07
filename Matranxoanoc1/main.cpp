#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[100][100]={0};
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<m ; j++)
			{
				cin>>a[i][j];
			}
		}
		int dem=0;
		int max=n;
		if(max<m) max=m;
		int k=1;
		while(k<=m*n)
		{
//			if(dem==m*n)
//			{
//				break;
//			}
			for(int j=i ; j<m-i ; j++)
			{
				cout<<a[i][j]<<" ";
				dem++;
				k++;
			}
//			if(dem==m*n)
//			{
//				break;
//			}
			for(int j=i+1 ; j<n-i ; j++)
			{
				cout<<a[j][m-i-1]<<" ";
				dem++;
				k++;
			}
//			if(dem==m*n)
//			{
//				break;
//			}
			for(int j=m-i-2 ; j>=i ; j--)
			{
				cout<<a[n-i-1][j]<<" ";
				dem++;
				k++;
			}
//			if(dem==m*n)
//			{
//				break;
//			}
			for(int j=n-i-2 ; j>i ; j--)
			{
				cout<<a[j][i]<<" ";
				dem++;
				k++;
			}
		}
		cout<<endl;
	}
	return 0;
}
