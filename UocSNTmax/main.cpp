#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ktraNT(long long n)
{
	if(n<2) return 0;
	else
	{
		for(int i=2 ; i<=sqrt(n) ; i++)
		{
			if(n%i==0) return 0;
		}
		return 1;
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		long long max=1;
		cin>>n;
		if(ktraNT(n))
		{
			cout<<n;
		}
		else
		{
			while(n%2==0)
			{
				max=2;
				n/=2;
			}
			for(int i=3 ; i<=sqrt(n) ; i+=2)
			{
				while(n%i==0)
				{
					if(max<i) max=i;
					n/=i;
				}
			}
			if(n!=1&&max<n) max=n;
			cout<<max;
		}
		cout<<endl;
	}
	return 0;
}
