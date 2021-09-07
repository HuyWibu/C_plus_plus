#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	cout<<"Giai pt: ax^2+bx+c=0";
	cout<<"Nhap a b c:";
	cin>>a>>b>>c;
	if (a==0)
	{
		// pt la bx+c=0
		if(b==0)
		{
			if(c==0) 
			{
				cout<<"Phuong trinh vo so nghiem";
			}
			else
			{
				cout<<"Phuong trinh vo nghiem";
			}
		}
		else	
		{
			cout<<"Phuong trinh co 1 nghiem la: x="<<setprecision(2)<<-c*1.0/b<<endl;
		}
	}
	else
	{
		// ax^2+bx+c=0
		double delta=b*b-4*a*c;
		double x1,x2;
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		cout<<"Phuong trinh co 2 nghiem phan biet: x1="<<setprecision(2)<<x1<<" va x2="<<setprecision(2)<<x2<<"";
	}
	return 0;
}
