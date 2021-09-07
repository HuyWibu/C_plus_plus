#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int a[100005];
		int n,x;
		cin>>n>>x;
		for(int i=0 ; i<n ; i++)
			cin>>a[i];
		int d=0;
		for(int i=0 ; i<n ; i++)
		{
			if(a[i]==x) 
			{
				d=1;
				cout<<1;
				break;
			}
		}
		if(d==0)
			cout<<"-1";
		cout<<endl;
	}
	return 0;
}
