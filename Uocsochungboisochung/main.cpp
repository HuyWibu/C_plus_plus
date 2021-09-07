#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long UCLN(long long a,long long b)
{
	while(b)
	{
		long long r=a%b;
		a=b; b=r;
	}
	return a;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b;
		cin>>a>>b;
		long long u=UCLN(a,b);
		long long bc=(a*b)/u;
		cout<<bc<<" "<<u<<endl;
	}
	return 0;
}
