#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ktrafibo(long long n)
{
	if(n==0 || n==1) return 1;
	else
	{
		long long a1=1,a2=1;
		long long a3=0;
		while(a3<n)
		{
			a3=a2+a1;
			if(a3==n) return 1;
			a1=a2;
			a2=a3;
		}
		return 0;
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int a[1005],b[1005];
		int n,dem=0;
		cin>>n;
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
		}
		for(int i=0 ; i<n ; i++)
		{
			if(ktrafibo(a[i]))
			{
				b[dem]=a[i];
				dem++;
			}
		}
		for(int i=0 ; i<dem ; i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
