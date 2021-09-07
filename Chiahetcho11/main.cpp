#include <iostream>
#include <string>
#include <string.h>
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
		int sum1=0;
		int sum2=0;
		for(int i=0 ; i<x ; i++)
		{
			if(i%2==0)
			{
				sum1+=(s[i]-'0');
			}
			else
			{
				sum2-=(s[i]-'0');
			}
		}
		int sum=sum1+sum2;
	//	cout<<sum<<'\n';
		if(sum%11==0)
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}
