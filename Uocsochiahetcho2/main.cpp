#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		long n;
		int dem=0;
		cin>>n;
		for(int i=2 ; i<=sqrt(n) ; i++)
		{
			if(n%i==0)
			{
				if(i%2==0) dem++;
				if((n/i)!=i && (n/i)%2==0) dem++;
			}
		}
		if(n%2==0) 
		{
			dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}
