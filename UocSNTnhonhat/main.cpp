#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[10005];
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
		int dem=0;
		int n;
		cin>>n;
		int d=1;
		while(d<=n)
		{
			a[dem]=d;
			dem++;
			d++;
		}
		for(int i=0 ; i<dem ; i++)
		{
			if(a[i]==1) 
			{
				cout<<"1 ";
			}
			else if(a[i]%2==0)
			{
				cout<<"2 ";
			}
			else if(ktraNT(a[i]))
			{
				cout<<a[i]<<" ";
			}
			else
			{
				for(int j=3 ; j<=sqrt(a[i]) ; j+=2)
				{
					if(ktraNT(j)&&a[i]%j==0)
					{
						cout<<j<<" ";
						break;
					}
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
