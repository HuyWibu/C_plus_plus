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
		int dem=0;
		cin>>n;
		for(int i=0 ; i<=sqrt(n) ; i++)
		{
			if(ktraNT(i))
			{
				dem++;
			}
		}
		cout<<dem<<endl; 
	}
	return 0;
}

