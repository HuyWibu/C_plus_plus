#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string a;
		cin>>a;
		int x=a.length();
		int i=0;
		while(i<x-1 && (a[i]-'0'<a[i+1]-'0'))
		{
			i++;
		}
		if(i==x-1)
		{
			cout<<"-1";
		}
		int max=a[i+1]-'0';
		for(int j=i+2 ; j<x ; j++)
		{
			if(max<a[j]-'0'&&)
			{
				max==a[j]-'0';
				
			}
		}
		char s[100];
		int k=0;
		for(int j=i ; j<x ; j++)
		{
			s[k]=a[j];
			k++;
		}
		int m=atoi(s);
	}
	return 0;
}
