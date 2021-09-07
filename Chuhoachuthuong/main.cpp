#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		char c;
		cin>>c;
		if(c>='a'&&c<='z')
		{
			c-=32;
			cout<<c<<endl;
		}
		else if(c>='A'&&c<='Z')
		{
			c+=32;
			cout<<c<<endl;
		}
	}
	return 0;
}
