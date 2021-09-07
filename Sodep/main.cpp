#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin>>s;
		int x=s.length();
		int d=0;
		int k=x-1;
		bool istrue=true;
		while(d<(x/2))
		{
			if(s[d]!=s[k])
			{
				istrue=false;
				break;
			}
			d++;
			k--;
		}
		if(istrue==true)
		{
			int check=1;
			for(int i=0 ; i<x ; i++)
			{
				if((s[i]-'0')%2!=0)
				{
					check=0;
					break;
				}
			}
			if(check==1)
			{
				cout<<"YES\n";
			}
			else
				cout<<"NO\n";
		}
		else
			cout<<"NO\n";
	}
	return 0;
}
