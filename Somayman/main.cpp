#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int m=n%10;
		n/=10;
		int a=n%10;
		if(m==6&&a==8)
		{
			cout<<"1"<<endl;
		}
		else
			cout<<"0"<<endl;
	}
	return 0;
}
