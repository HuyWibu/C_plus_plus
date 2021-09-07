#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long long n;
	cin>>n;
	bool istrue=true;
	while(n)
	{
		if(n<10) break;
		int m=n%10;
		if(m>=((n/10)%10))
		{
			istrue=false;
			cout<<"NO\n";
			break;
		}
		n/=10;
	}
	if(istrue==true)
	{
		cout<<"YES\n";
		
	}
	return 0;
}
