#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int a[100005];
		int n;
		cin>>n;
		for(int i=0 ; i<n-1 ; i++)
		{
			cin>>a[i];
		}
		int d=1;
		for(int i=0 ; i<n-1 ; i++)
		{
			if(a[i]!=d)
			{
				cout<<d;
				break;
			}
			d++;
		}
		cout<<endl;
		
	}
	return 0;
}
