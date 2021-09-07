#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b;
	char c;
	cout<<"Chuong trinh tinh toan so hoc\n";
	cout<<"Moi bo nhap so a: ";
	cin>>a;
	cout<<"Moi bo nhap so b: ";
	cin>>b;
	cout<<"Moi bo nhap phep toan(+,-,*,/): ";
	cin>>c;
	switch(c)
	{
		case '+':
			cout<<"Ket qua phep cong cua "<<a<<"+"<<b<<"="<<a+b<<""<<endl;	
			break;
		case '-':
			cout<<"Ket qua phep tru cua "<<a<<"-"<<b<<"="<<a-b<<""<<endl;
			break;
		case '*':
			cout<<"Ket qua phep nhan cua "<<a<<"*"<<b<<"="<<a*b<<""<<endl;
			break;
		case '/':
			if(b==0)
			{
				cout<<"Lam deo gi chia duoc cho 0??? May bi ngu a!!!"<<endl;
			}
			else
			{
				cout<<"Ket qua phep chia cua "<<a<<"/"<<b<<"="<<a*1.0/b<<""<<endl;
			}
			break;
		default: 
			cout<<"May nhap sai me may roi thang oc cho!!!";
	}	
	return 0;
}
