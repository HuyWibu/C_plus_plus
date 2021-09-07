#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct NhanVien
{
	string manhanvien="00001";
	string hoten;
	string gioitinh;
	string ngaysinh;
	string diachi;
	string masothue;
	string ngaykyhopdong;
};
void nhap(NhanVien &n)
{
	getline(cin,n.hoten);
	getline(cin,n.gioitinh);
	getline(cin,n.ngaysinh);
	getline(cin,n.diachi);
	getline(cin,n.masothue);
	getline(cin,n.ngaykyhopdong);
}
void in(NhanVien s)
{
	cout<<s.manhanvien<<" "<<s.hoten<<" "<<s.ngaysinh<<" "<<s.diachi<<" "<<s.masothue<<" "<<s.ngaykyhopdong;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
