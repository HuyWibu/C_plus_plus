#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ktrachinhphuong(long n)
{
	if(sqrt(n)==(int)sqrt(n)) return 1;
	else return 0;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		long b,p;
		int dem=0;
		cin>>b>>p;
		for(int i=1 ; i<=b*b ; i+=p)
		{
			if(ktrachinhphuong(i))
			{
				dem++;
				cout<<i<<endl;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
