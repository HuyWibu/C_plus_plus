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
		char a[1005][1005]={0};
		string s;
		getline(cin,s);
		int x=s.length();
		int m=0,n=0;
		for(int i=0 ; i<x ; i++)
		{
			if(s[i]==' ')
			{
				while(s[i]==' ')
				{
					i++;
				}
				n++;
				m=0;
				i--;
			}
			else
			{
				a[n][m]=s[i];
				m++;
			}
		}
		for(int i=n ; i>=0 ; i--)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
