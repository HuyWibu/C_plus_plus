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
		string s;
		getline(cin,s);
		int x=s.length();
		int dem=0;
		for(int i=0 ; i<x ; i++)
		{
			if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
			{
				while((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
				{
					i++;
				}
				dem++;
				i--;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
