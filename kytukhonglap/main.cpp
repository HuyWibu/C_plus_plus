#include <iostream>
#include <string.h>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		char a[100005]={0};
		string s;
		cin>>s;
		int x=s.length();
		for(int i=0 ; i<x-1 ; i++)
		{
			for(int j=i+1 ; j<x ; j++)
			{
				if(s[j]==s[i]&a[s[i]]!=1)
				{
					a[s[i]]=1;
				}
			}
		}
		for(int i=0 ; i<x ; i++)
		{
			if(a[s[i]]!=1)
			{
				cout<<s[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
