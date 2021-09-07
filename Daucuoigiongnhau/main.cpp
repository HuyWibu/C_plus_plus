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
		cin>>s;
		int x=s.length();
		int dem=x;
		for(int i=0 ; i<x-1 ; i++)
		{
			for(int j=i+1 ; j<x ; j++)
			{
				if(s[i]==s[j])
				{
					dem++;
				}
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
