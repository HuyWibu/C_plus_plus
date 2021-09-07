#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x;
	double radian;
	const double PI=3.14;
	cout<<"Moi bo nhap goc x tu ban phim:";
	cin>>x;
	radian=x*PI/180;
	double sinx=sin(radian);
	double cosx=cos(radian);
	double tanx=tan(radian);
	double cotx=1.0/tanx;
	cout<<"sin("<<x<<")="<<sinx<<endl;
	cout<<"cos("<<x<<")="<<cosx<<endl;
	cout<<"tan("<<x<<")="<<tanx<<endl;
	cout<<"cot("<<x<<")="<<cotx<<endl;
	return 0;
}
