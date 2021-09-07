#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		int dem=a.length();	
		for(int i=0 ; i<dem ; i++)		
		{
			if(a[i]=='0'&&a[i+1]=='8'&&a[i+2]=='4')
			{
				a[i]='*';
				a[i+1]='*';
				a[i+2]='*';
			}
		}
		for(int i=0 ; i<dem ; i++)
		{
			if(a[i]!='*')
			{
				cout<<a[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
