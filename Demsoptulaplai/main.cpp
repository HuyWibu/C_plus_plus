#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1000005];
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
		}
		int dem=0;
		int d;
		for(int i=0 ; i<n-1 ; i++)
		{
			d=0;
			for(int j=i+1 ; j<n ; j++)			// 10 20 30 30 20 5 20
			{
				if(a[i]==a[j]&&a[i]!='*')
				{
					if(d==0)
					{
						dem+=2;
						a[j]='*';
						d=1;
					}
					else
					{
						dem++;
						a[j]='*';
					}
				}
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
