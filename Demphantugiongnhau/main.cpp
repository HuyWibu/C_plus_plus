#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void check(int a[][100],int n)
{
	for(int i=0 ; i<n-1 ; i++)
	{
		for(int j=i+1 ; j<n ; j++)
		{
			if(a[0][i]==a[0][j])
			{
				a[0][j]=-1;
			}
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[100][100]={0};
		int b[100005]={0};
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<n ; j++)
			{
				cin>>a[i][j];
			}
		}
		int k=0;
		check(a,n);
		while(k<n)
		{
			for(int i=1 ; i<n ; i++)
			{
				for(int j=0 ; j<n ; j++)
				{
					if(a[0][k]==a[i][j])
					{
						b[a[0][k]]++;
						break;
					}
				}
			}
			k++;
		}
		int dem=0;
		for(int i=0 ; i<n ; i++)
		{
			if(b[a[0][i]]==n-1)
			dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}
