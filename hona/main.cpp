#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long a;
		cin >> a;
		for(int i=2;i<=sqrt(a);i++)
		{
			while(a%i==0)
			{
				cout << i <<" ";
				a=a/i;
			}
		}
		if(a!=1) cout << a <<endl;
	}
}
