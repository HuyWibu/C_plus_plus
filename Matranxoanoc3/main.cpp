#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{		
		int n,m,k;
		cin>>n>>m>>k;
		int a[100][100]={0};
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<m ; j++)
			{
				cin>>a[i][j];
			}
		}
		int max=n;
		if(max<m) max=m;
		int x=0;
		int gan;
		bool check=false;
		for(int i=0 ; i<=(max/2)-1 ; i++)
		{
				for(int j=i ; j<m-i ; j++)
				{
					if(x==k-1&&check==false)
					{
						gan=a[i][j];
						check=true;
					}
					x++;
				}
				if(check==true||x==m*n-1)
				{
					break;
				}
				for(int j=i+1 ; j<n-i ; j++)
				{
					if(x==k-1&&check==false)
					{
						gan=a[j][m-i-1];
						check=true;
					}
					x++;
				}
				if(check==true||x==m*n-1)
				{
					break;
				}
				for(int j=m-i-2 ; j>=i ; j--)
				{
					if(x==k-1&&check==false)
					{
						gan=a[n-i-1][j];
						check=true;
					}
					x++;
				}
				if(check==true||x==m*n-1)
				{
					break;
				}
				for(int j=n-i-2 ; j>i ; j--)
				{
					if(x==k-1&&check==false)
					{
						gan=a[j][i];
						check=true;
					}
					x++;
				}
				if(check==true||x==m*n-1)
				{
					break;
				}
		}
		if(check==false)
		{
			gan=a[m/2][m/2];	
		}
		cout<<gan<<endl;
	}
	return 0;
}

