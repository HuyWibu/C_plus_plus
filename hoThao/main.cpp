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
			if(n%i==0)
			{
				return 0;
			}
		}
		return 1;
	}
}
int ktratang(long long n)
{
	while(n)
	{
		int m=n%10;
		if(m<=((n/10)%10))
		{
			return 0;
		}
		n/=10;
	}
	return 1;
}
int ktragiam(long long n)
{
	while(n)
	{
		if(n<10) break;
		int m=n%10;
		if(m>=((n/10)%10))
		{
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int dem=0;
		cin>>n;
		long long l=pow(10,n-1);
		long long k=pow(10,n);
		for(long long i=l ; i<k ; i++)
		{
			if(ktraNT(i))
			{
				if(ktratang(i)==1||ktragiam(i)==1)
				dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}

