#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long UCLN(long long a,long b)
{
	while(a!=b)
	{
		if(a>b) a-=b;
		else b-=a;
	}
	return a; 
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		long long a,x,y;
		cin>>a>>x>>y;
		long long m=UCLN(x,y);
		for(int i=0 ; i<m ; i++)
		{
			cout<<a;
		}
		cout<<endl;
	}
	return 0;
}
