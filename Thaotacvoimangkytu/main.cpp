#include <iostream>
#include <cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	char s[100];
//	cin.getline(s,100);
//	int x=strlen(s);
//	cout<<x<<endl;
//	_strlwr(s);
//	cout<<s<<endl;
//	_strupr(s);
//	cout<<s<<endl;
	string a,b;
	getline(cin,a);
	getline(cin,b);
	string c;
	
	c=a+' ';
	c=c+b;
	cout<<c<<endl;
	return 0;
}
