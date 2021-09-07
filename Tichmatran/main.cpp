#include <iostream>
using namespace std;
int a[1005][1005]={0};
int b[1005][1005]={0};
int c[1005][1005]={0};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,m,p;
	cin>>n>>m>>p;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<m ; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<p ; j++)
		{
			cin>>b[i][j];
		}
	}
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<p ; j++)
		{	
			int sum=0;
			for(int l=0 ; l<m ; l++)
			{
				sum+=a[i][l]*b[l][j];
			}
			c[i][j]=sum;
		}
	}
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<p ; j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
