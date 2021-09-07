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
		char a[100005]={0};
		cin>>s;
		int k;
		cin>>k;
		int x=s.length();
		int dem=0;
		if(x<26)
		{
			cout<<"0";
		}
		else
		{
			for(int i=0 ; i<x ; i++)
			{
				if(s[i]>='a'&&s[i]<='z'&&a[s[i]]!=1)
				{
					a[s[i]]=1;
					dem++;
				}
			}
			if(k>=(26-dem)) cout<<"1";
			else
				cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}
