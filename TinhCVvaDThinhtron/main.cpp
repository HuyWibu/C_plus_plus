#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	const double PI=3.14;
	double r;
	cout<<"Moi bo nhap ban kinh:";
	cin>>r;
	cout<<endl;
	cout<<"Chu vi duong tron la:"<<2*PI*r<<endl;
	cout<<"Dien tinh duong tron la:"<<PI*r*r<<endl;
	return 0;
}
