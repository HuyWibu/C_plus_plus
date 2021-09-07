#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long k;
		cin>>n>>k;
		long s=0;
		for(int i=1 ; i<=n ; i++)
		{
			s+=(i%k);
		}
		if(s==k) cout<<"1\n";
		else
			cout<<"0\n";
	}
	return 0;
}
