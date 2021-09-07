#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct ThiSinh
{
	string hoten;
	string ngaysinh;
	float diem1;
	float diem2;
	float diem3;
};
void nhap(ThiSinh &A)
{
	getline(cin,A.hoten);
	getline(cin,A.ngaysinh);
	cin>>A.diem1>>A.diem2>>A.diem3;
}
void in(ThiSinh A)
{
	float tong=A.diem1+A.diem2+A.diem3;
	cout<<A.hoten<<" "<<A.ngaysinh<<" ";
	cout<<fixed<<setprecision(1)<<tong<<endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
