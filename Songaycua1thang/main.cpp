#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	if(t<=0 || t>=12) 
	{
		cout<<"May nhap sai roi thang ngu!!!";
	}
	else
	{
		// nhung thang co 31 ngay 1 3 5 7 8 10 12
		if(t==1||t==3||t==5||t==7||t==8||t==10||t==12)
		{
			cout<<"Thang "<<t<<" co 31 ngay!!!\n";
		}
		else if(t==6||t==4||t==9||t==11)
		{
			cout<<"Thang "<<t<<" co 30 ngay!!!\n";
		}
		else
		{
			int n;
			cout<<"Nam day la nam bao nhieu??\n";
			cout<<"Nhap nam xem nao: ";
			cin>>n;
			if((n%4==0 && n%100!=0)||n%400==0)
			{
				cout<<"Nam "<<n<<" la nam nhuan!!!"<<endl;
				cout<<"Thang 2 co 29 ngay!!!\n";
			}
			else
			{
				cout<<"Nam "<<n<<" deo phai nam nhuan!!!"<<endl;
				cout<<"Thang 2 co 28 ngay!!!\n";
			}
		}
	}
	return 0;
}
