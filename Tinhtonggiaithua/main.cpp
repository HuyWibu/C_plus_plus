#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	long long S=0;
	long long mau=1;
	cin>>n;
	for(int i=1 ; i<=n ; i++)
	{
		mau=mau*i;
		S=S+mau;
	}
	cout<<S;
	return 0;
}
