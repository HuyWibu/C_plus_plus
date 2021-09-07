#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		bool istrue=true;
		cin>>n;
		while(n)
		{
			int m=n%10;
			if(m!=6&&m!=8&&m!=0)
			{
				cout<<"NO\n";
				istrue=false;
				break;
			}
			n/=10;
		}
		if(istrue==true)
		{
			cout<<"YES\n";
		}
	}
	return 0;
}
