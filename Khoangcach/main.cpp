#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		double xA,yA,xB,yB;
		cin>>xA>>yA>>xB>>yB;
		double d;
		d=sqrt(pow(xB-xA,2)+pow(yB-yA,2));
		cout<<fixed<<setprecision(4)<<d<<endl;
	}
	return 0;
}
