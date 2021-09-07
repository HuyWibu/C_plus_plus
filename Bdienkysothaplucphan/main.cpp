#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char c;
	cin>>c;
	if(c==0||c==1||c==2||c==3||c==4||c==5||c==6||c==7||c==8||c==9)
	{
		cout<<"Ky tu trong he thap luc phan cua "<<c<<" la:"<<c;
	}
	else
	{
		switch(c)
		{
			case 'A':
				cout<<"Ky tu trong he thap luc phan cua "<<c<<" la: 10";
				break;
			case 'B':
				cout<<"Ky tu trong he thap luc phan cua "<<c<<" la: 11";
				break;
			case 'C':
				cout<<"Ky tu trong he thap luc phan cua "<<c<<" la: 12";
				break;
			case 'D':
				cout<<"Ky tu trong he thap luc phan cua "<<c<<" la: 13";
				break;
			case 'E':
				cout<<"Ky tu trong he thap luc phan cua "<<c<<" la: 14";
				break;
			case 'F':
				cout<<"Ky tu trong he thap luc phan cua "<<c<<" la: 15";
				break;
			default:
				cout<<"He thap luc phan khong dung ky so nay!!!";
				break;
		}
	}
	return 0;
}
