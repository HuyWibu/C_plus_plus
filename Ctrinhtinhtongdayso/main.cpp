#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long long n;
	cin>>n;
	double sum=0;
	for(double i=n ; i<=-1 ; i++)
	{
		sum+=pow(9.0,i);
	}
	cout<<fixed<<setprecision(10)<<sum;
	return 0;
}
