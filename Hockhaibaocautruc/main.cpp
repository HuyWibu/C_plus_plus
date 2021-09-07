#include <iostream>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Diachi
{
	string Xa;
	string Huyen;
	string Tinh;
	string Khu;
};
struct SinhVien
{
	string MSV;
	string HoTen;
	bool GT;
	Diachi Diachinha;
	Diachi Diachitruong;	
}huy;
int main(int argc, char** argv) {
	huy.HoTen="Nguyen Quang Huy";
	huy.MSV="B20DCCN317";
	huy.GT=true;
	huy.Diachinha.Khu="2";
	huy.Diachinha.Xa="Minh Tan";
	huy.Diachinha.Huyen="Cam Khe";
	huy.Diachinha.Tinh="Phu Tho";
	cout<<"-------------------------\n";
	cout<<"THONG TIN CUA HUY:\n";
	cout<<"Ho va ten:\t"<<huy.HoTen<<endl;
	cout<<"Ma sinh vien:\t"<<huy.MSV<<endl;
	cout<<"Gioi tinh:\t"<<(huy.GT==true?"Nam":"Nu")<<endl;
	cout<<"Dia chi nha:\nKhu:\t"<<huy.Diachinha.Khu<<"\nXa:\t"<<huy.Diachinha.Xa<<"\nHuyen:\t"<<huy.Diachinha.Huyen;
	cout<<"\nTinh:\t"<<huy.Diachinha.Tinh<<endl;
	
	SinhVien Teo;
	Teo.HoTen="Nguyen Van Teo";
	Teo.MSV="B20DCCN316";
	cout<<"Ho va ten:\t"<<Teo.HoTen<<endl;
	cout<<"Ma Sinh Vien:\t"<<Teo.MSV<<endl;
	return 0;
}
