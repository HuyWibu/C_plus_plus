#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b;
	double x;
	cout<<"Nhap he so a=";
	cin>>a;
	cout<<"Nhap he so b=";
	cin>>b;
	if(a==0)
	{
		if(b==0)
		{	// ax+b=0
			cout<<"Phuong trinh vo so nghiem";
		}
		else
		{
			cout<<"Phuong trinh vo nghiem";
		}
	}
	else 
	{
		x=-b*1.0/a;
		cout<<"Phuong trinh co nghiem x="<<x<<"";
	}
	return 0;
}
