#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1000005];
long long BCNN(long long a,long long b)
{
	long long m=a;
	long long n=b;
	while(b!=0)
	{
		long long c=a%b;
		a=b; b=c;
	}
	return (m*n)/a;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int dem=0;
		long long d=1;
		while(d<=n)
		{
			a[dem]=d;
			dem++;
			d++;
		}
		long long x=a[0];
		for(int i=1 ; i<dem ; i++)
		{
			x=BCNN(x,a[i]);
		}
		cout<<x<<endl;
	}
	return 0;
}
