#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ktraNT(int n)
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
int Tongcso(int n)
{
	int sum=0;
	while(n)
	{
		sum+=(n%10);
		n/=10;
	}
	return sum;
}
int TonguocNT(int n)
{
	int sum=0;
	while(n%2==0)
	{
		sum+=2;
		n/=2;
	}
	for(int i=3 ; i<=sqrt(n) ; i+=2)
	{
		while(n%i==0)
		{
			sum+=Tongcso(i);
			n/=i;
		}
	}
	if(n!=1)
	{
		if(n<10)
		{
			sum+=n;
		}	
		else
		{
			sum+=Tongcso(n);
		}
	}
	return sum;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(ktraNT(n)==0)
		{
			if(TonguocNT(n)==Tongcso(n))
			{
				cout<<"YES\n";
			}
			else
				cout<<"NO\n";
		}
		else
			cout<<"NO\n";
	}
	return 0;
}
