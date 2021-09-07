#include <iostream>
using namespace std;
typedef long long ll;
struct PhanSo
{
	ll tu,mau;
};
void nhap(PhanSo &n)
{
	cin>>n.tu>>n.mau;
}
ll UCLN(ll a, ll b)
{
	ll c;
	while(b)
	{
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}
void rutgon(PhanSo &n)
{
	ll x=UCLN(n.tu,n.mau);
	n.tu/=x;	n.mau/=x;
}
PhanSo tong(PhanSo &a, PhanSo &b)
{
	rutgon(a);
	rutgon(b);
	ll x=UCLN(a.mau,b.mau);
	ll y=a.mau*b.mau/x;
	a.tu*=(y/a.mau);
	b.tu*=(y/b.mau);
	PhanSo z;
	z.tu=a.tu+b.tu;
	z.mau=y;
	return z;
}
void in(PhanSo n)
{
	cout<<n.tu<<"/"<<n.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
