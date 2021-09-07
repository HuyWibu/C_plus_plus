#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int a[100005],b[100005]={0};
		int n,x;
		cin>>n>>x;
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
			if(a[i]==x)
				b[a[i]]++;	
		}
		if(b[x]!=0) cout<<b[x];
		else
			cout<<"-1";
		cout<<endl;
	}
	return 0;
}
