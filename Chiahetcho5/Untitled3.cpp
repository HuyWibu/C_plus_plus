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
		long long res=0;
		for(int i=0 ; i<x ; i++)
		{
			if(s[i]=='1')
			{
				if(i%4==0)
				{
					res+=1;
				}
				else if(i%4==1)
				{
					res+=2;
				}
				else if(i%4==2)
				{
					res+=4;
				}
				else if(i%4==3)
				{
					res+=3;
				}
			}
		}
//		cout<<res<<endl;
		if(res%5==0)
		{
			cout<<"Yes\n";
		}
		else
		cout<<"No\n";
	}
	return 0;
}
