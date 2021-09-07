#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	double s=0;
	for(int i=1 ; i<=n ; i++)
	{
		s=s+1.0/i;
	}
	cout<<fixed<<setprecision(4)<<s;
	return 0;
}
