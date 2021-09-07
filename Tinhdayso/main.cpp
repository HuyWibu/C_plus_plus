#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double x;
	int n;
	double tu;
	int mau=1;
	double S=0.0;
	cin>>x>>n;
	for(int i=1 ; i<=n ; i++)
	{
		tu=pow(x,i);
		mau*=i;
		S=S+tu/mau;
	}
	cout<<"S("<<x<<","<<n<<")="<<S;
	return 0;
}
