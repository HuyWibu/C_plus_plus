#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[155][155];
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<n ; j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<n ; j++)
			{
				if(i==0 || j==0 || i==n-1 || j==n-1)
				{
					cout<<a[i][j]<<" ";
				}
				else
				cout<<"  ";
			}
			cout<<endl;
		}
	}
	return 0;
}
