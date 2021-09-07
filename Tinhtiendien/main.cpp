#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	const int gia1=600,gia2=700,gia3=900,gia4=1100;
	int tientra;
	int t;
	cin>>t;
	if(t<=100)
	{
		tientra=t*gia1;
	}
	else if(t<=150)
	{
		tientra=100*gia1+(150-t)*gia2;
	}
	else if(t<=200)
	{
		tientra=100*gia1+50*gia2+(t-150)*gia3;
	}
	else
	{
		tientra=100*gia1+50*gia2+50*gia3+(t-200)*gia4;
	}
	cout<<"So tien can phai tra la: "<<tientra<<" VND";
	return 0;
}
