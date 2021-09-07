#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int stt=1;
struct NhanVien
{
	string hoten;
	string gioitinh;
	string ngaysinh;
	string diachi;
	string masothue;
	string ngaykyhopdong;
};
void nhap(NhanVien &n)
{
	cin.ignore();
	getline(cin,n.hoten);
	cin>>n.gioitinh;
	cin>>n.ngaysinh;
	cin.ignore();
	getline(cin,n.diachi);
	cin>>n.masothue;
	cin>>n.ngaykyhopdong;
}
void inds(NhanVien a[],int n)
{
	for(int i=0 ; i<n ; i++)
	{
		if (stt + i < 10)
        	cout << "0000" << stt + i << " ";
        else
        	cout << "000" << stt + i <<" ";
		cout<<a[i].hoten<<" "<<a[i].gioitinh<<" "<<a[i].ngaysinh<<" "<<a[i].diachi<<" "<<a[i].masothue<<" "<<a[i].ngaykyhopdong<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
