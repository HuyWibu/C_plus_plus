#include <iostream>
#include <string>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char s[105];
	cin>>s;
	int x=strlen(s);
	for(int i=0 ; i<x ; i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]+=32;
		}
	}
	for(int i=0 ; i<x ; i++)
	{
		if(s[i]=='u'||s[i]=='e'||s[i]=='o'||s[i]=='a'||s[i]=='i'||s[i]=='y')
		{
			s[i]='*';
		}
	}
	for(int i=0 ; i<x ; i++)
	{
		if(s[i]!='*')
			cout<<"."<<s[i];
	}

	return 0;
}
