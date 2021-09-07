#include <iostream>
#include <string>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int x=s.length();
		unsigned long long res=0;
		for(int i=0 ; i<x ; i++)		// chuoi la 1001001111000111000111
		{
			if(s[i]-'0'==1)
			{
				res+=1;			//vi du vs s[0]=1 
			}
			if(i!=x-1)
			{
				res*=2;
			}				// doi bit 1 len bit 10 neu s[1]=1 phai res+1 neu ko thi tiep tuc doi bit
		}
		cout<<res<<endl;
		if(res%5==0)
		{
			cout<<"Yes\n";
		}
		else
			cout<<"No\n";
	}
	return 0;
}
