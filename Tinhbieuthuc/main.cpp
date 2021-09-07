#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	double x,A,B,C;
	cin>>n;
	cin>>x;
	B=pow(x,2)+x+1;
	C=pow(x,2)-x+1;
	A=pow(B,n)+pow(C,n);
	cout<< A;
	
	return 0;
}
