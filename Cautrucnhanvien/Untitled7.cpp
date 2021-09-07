#include <bits/stdc++.h>

using namespace std;
struct NhanVien
{
    string mnv = "00001";
    string ten, gt, tuoi, diachi, mst, day;
};
void nhap(NhanVien &n)
{
    getline(cin, n.ten);
    getline(cin, n.gt);
    getline(cin, n.tuoi);
    getline(cin, n.diachi);
    getline(cin, n.mst);
    getline(cin, n.day);
}
void in(NhanVien n)
{
    cout << n.mnv << " " << n.ten << " " << n.gt << " " << n.tuoi << " " << n.diachi << " " << n.mst << " " << n.day;
}
int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
