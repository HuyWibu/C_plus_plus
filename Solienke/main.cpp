#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		bool istrue=true;
		string a;
		cin>>a;
		int dem=a.length();
		for(int i=0 ; i<dem ; i++)
		{
			if(i==dem-1)
			{
				break;
			}
			else
			{
				int l=a[i+1]+1;
				int k=a[i+1]-1;
				if(a[i]!=l&&a[i]!=k)
				{
					istrue=false;
					cout<<"NO\n";
					break;
				}
			}
		}
		if(istrue==true) cout<<"YES\n";
	}
	return 0;
}
