#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ktraNT(int n)
{
	if(n<2)	return 0;
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
		int n;
		cin>>n;
		if(n%2==0)
		{
			int i=2;
			bool istrue=false;
			while(i<=n)
			{
				if(ktraNT(i)&&ktraNT(n-i))
				{
					cout<<i<<" "<<n-i;
					istrue=true;
					break;
				}
				i++;
			}
			if(istrue==false) 
			{
				cout<<"-1";
			}
		}
		else
		{
			if(ktraNT(n-2))
			{
				cout<<2<<" "<<n-2;
			}
			else
				cout<<"-1";
		}
		cout<<endl;	
	}
	return 0;
}
