#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long s=1;
		for(long long i=2 ; i<=sqrt(n) ; i++)	
		{
			if(n%i==0)
			{
				s+=i;
				if((n/i)!=i)
				{
					s+=(n/i);
				}
			}
		}
		if(s==n) cout<<"1"<<endl;
		else	cout<<"0"<<endl;
	}
	return 0;
}
