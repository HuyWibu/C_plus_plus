#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ktraSNT(long n)
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
	long n;
	cin>>n;
	if(ktraSNT(n))
	{
		cout<<n<<" 1";
	}
	else
	{
		int i=2;
		while(n>1)
		{
			int dem=0;
			if(n%i==0)
			{
				while(n%i==0)
				{
					n/=i;
					dem++;
				}
			cout<<i<<" ";
			cout<<dem<<" "<<endl;
			}
		i++;
		}
	}
	return 0;
}
