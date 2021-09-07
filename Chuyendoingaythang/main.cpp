#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	int nam,tuan,ngay;
	cout<<"Moi bo nhap vao so ngay:";
	cin>>t;
	nam=t/365;
	tuan=(t%365)/7;
	ngay=((t%365)%7);
	cout<<"Vay nam:tuan:ngay la: "<<nam<<":"<<tuan<<":"<<ngay<<"";
	return 0;
}
