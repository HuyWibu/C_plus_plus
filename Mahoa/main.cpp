#include <iostream>
#include <string>
#include <cstring>
using namespace  std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		int a[1005]={1};
		string s;
		cin>>s;
		int x=s.length();
		for(int i=0 ; i<x-1 ; i++)
		{
			for(int j=i+1 ; j<x ; j++)
			{
				if(s[i]==s[j] && s[i]!='*')
				{
					a[s[i]]++;
					s[i]='*';
				}
			}
		}
		for(int i=0 ; i<x ; i++)
		{
			if(s[i]!='*')
			{
				cout<<s[i]<<a[s[i]]+1;
			}
		}
		cout<<endl;
	}
	return 0;
}
