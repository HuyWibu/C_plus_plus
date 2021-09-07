#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double t,l,h;
	double dtb;		
	cout<<"Moi bo nhap diem toan:";
	cin>>t;
	cout<<"Moi bo nhap diem ly:";
	cin>>l;
	cout<<"Moi bo nhap diem hoa:";
	cin>>h;
	dtb=(t+l+h)/3;
	cout<<"Diem trung binh cua con bo la:"<<setprecision(3)<<dtb<<endl;
	//	setprecison la ham lam tron len so thap phan thu 2 sau dau ","
	return 0;
}
