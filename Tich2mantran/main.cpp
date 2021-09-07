#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[100][100],b[100][100],c[100][100]={0};
	int m,k,n;
	cin>>m>>k>>n;
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<k ; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0 ; i<k ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cin>>b[i][j];
		}
	}
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			int sum=0;
			for(int l=0 ; l<k ; l++)
			{
				sum+=a[i][l]*b[l][j];
			}
			c[i][j]=sum;
		}
	}
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
