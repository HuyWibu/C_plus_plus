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
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		int dem=0;
		for(int i=l ; i<=r ; i++)
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
