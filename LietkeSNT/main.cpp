#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ktraNT(long n)
{
	if(n<2) return 0;
	else
	{
		for(int i=2 ; i<=sqrt(n) ; i++)
		{
			if(n%i==0)	return 0;
		}
		return 1;
	}
}
int main(int argc, char** argv) {
	long a,b;
	cin>>a>>b;
	if(a>b)
	{
		long temp=a;
		a=b;
		b=temp;
	}
	for(long i=a ; i<=b ; i++)
	{
		if(ktraNT(i))
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
