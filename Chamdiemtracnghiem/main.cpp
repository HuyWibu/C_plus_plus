#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	double diem;
	if(n==101)
		{
			diem=0;
			char b[15];
			char a[15];
			a[0]='A';
			a[1]='B';
			a[2]='B';
			a[3]='A';
			a[4]='D';
			a[5]='C';
			a[6]='C';
			a[7]='A';
			a[8]='B';
			a[9]='D';
			a[10]='C';
			a[11]='C';
			a[12]='A';
			a[13]='B';
			a[14]='D';
			for(int i=0 ; i<15 ; i++)
			{
				cin>>b[i];
			}
			for(int i=0 ; i<15 ; i++)
			{
				if(b[i]==a[i])
				diem+=2.0/3;
			}
			cout<<fixed<<setprecision(2)<<diem<<endl;
		}
	else if(n==102)
	{
			diem=0;
			char b[15];
			char a[15];
			a[0]='A';
			a[1]='C';
			a[2]='C';
			a[3]='A';
			a[4]='B';
			a[5]='C';
			a[6]='D';
			a[7]='D';
			a[8]='B';
			a[9]='B';
			a[10]='C';
			a[11]='D';
			a[12]='D';
			a[13]='B';
			a[14]='B';
			for(int i=0 ; i<15 ; i++)
			{
				cin>>b[i];
			}
			for(int i=0 ; i<15 ; i++)
			{
				if(b[i]==a[i])
				diem+=2.0/3;
			}
			cout<<fixed<<setprecision(2)<<diem<<endl;
	}
	}
	return 0;
}
