#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		long long sodao=0;
		cin>>n;
		long long a=n;
		while(n)
		{
			int m=n%10;
			sodao=sodao*10+m;
			n/=10;
		}
		if(sodao==a)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
