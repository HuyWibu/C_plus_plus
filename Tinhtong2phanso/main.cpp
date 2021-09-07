#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n';

struct PhanSo
{
    ll tu, mau;
};

ll gcd(ll a, ll b){
	ll tmp;
	while(b){
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

void rutgon(PhanSo &n){
	ll g = gcd(n.tu, n.mau);
	n.tu /= g; n.mau /= g;
}

void nhap (PhanSo &n){
    cin >> n.tu >> n.mau;
}

void in(PhanSo n){
	cout << n.tu << "/" << n.mau;
}

PhanSo tong (PhanSo &a,  PhanSo &b){
	rutgon(a); rutgon(b);
	ll g = gcd(a.mau, b.mau);
	ll l = a.mau * b.mau / g;
	a.tu *= (l / a.mau);
	b.tu *= (l / b.mau);
	PhanSo res;
	res.tu = a.tu + b.tu;
	res.mau = l ;
	rutgon(res);
	return res;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

