#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien
{
	string hoten;
	string lop;
	string ngaysinh;
	float diem;
};
void nhap(SinhVien &n)
{
	getline(cin,n.hoten);
	getline(cin,n.lop);
	getline(cin,n.ngaysinh);
	cin>>n.diem;
}
void in(SinhVien s)
{
	int x=s.ngaysinh.length();
	for(int i=0 ; i<x ; i++)
	{
		if(i==1&&s.ngaysinh[i]=='/')
		{
			s.ngaysinh="0"+s.ngaysinh;
		}
		if(i==4&&s.ngaysinh[i]=='/')
		{
			s.ngaysinh.insert(3,"0");
		}
	}
	cout<<"B20DCCN001 "<<s.hoten<<" "<<s.lop<<" "<<s.ngaysinh<<" ";
	cout<<fixed<<setprecision(2)<<s.diem<<endl;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
