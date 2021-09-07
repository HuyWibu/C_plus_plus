#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int UCLN(int a,int b)
{
	while(b)
	{
		int c=a%b;
		a=b; b=c;
	}
	if(a==1) return 1;
	else	return 0;
}
int ktrNT(int n)
{
	if(n<2) return 0;
	else
	{
		for(int i=2 ; i<=sqrt(n) ; i++)
		{
			if(n%i==0) return 0;
		}
		return 1;
	}
}
int main(int argc, char** argv) {
/*
	Gt bai toan: Dem xem trong khoang tu 1 den x co bao nhieu so nguyen to cung nhau voi x
	Sau do xet xem so so nguyen to cung nhau vs x co phai la so nguyen to hay khong 
	Neu co thi in 1 khong thi in 0
*/
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		int dem=0;
		cin>>x;
		for(int i=1 ; i<=x ; i++)
		{
			if(UCLN(i,x))
			{
				dem++;
			}
		}
		if(ktrNT(dem)) cout<<"1\n";
		else cout<<"0\n";
	}
	return 0;
}
