#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double xA,yA,xB,yB,AB;
	cin>>xA>>yA;
	cin>>xB>>yB;
	AB=sqrt(pow(xB-xA,2)+pow(yB-yA,2));
	cout<<AB;
	return 0;
}
