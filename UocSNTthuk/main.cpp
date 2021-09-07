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
			if(n%i==0)
			{
				return 0;
			}
		}
		return 1;
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int dem=0;
		bool istrue=false;
		int i=2;
		while(n>1)
		{
			while(n%i==0)
			{
				dem++;
				if(dem==k) 
				{
					cout<<i;
					istrue=true;
					break;
				}
				n/=i;
			}
			if(istrue==true) break;
			i++;
		}
		if(istrue==false)
		{
			cout<<"-1";
		}
		cout<<endl;
	}
	return 0;
}
