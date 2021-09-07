#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char s1[100];
	char s2[100];
	cin.getline(s1,100);
	cin.getline(s2,100);
	int n=strlen(s1);
	int y=strlen(s2)+1;
	char *p=strstr(s1,s2);
	if(p==NULL)
	{
		cout<<s1;
	}
	else
	{
		int i=0;
		int k=p-s1;
		while(i<n)
		{
			if(i!=k)
			{
				i++;
			}
			else
			{
				while(y--)
				{
					s1[i]='*';
					i++;
				}
				break;
			}
		}
		for(int i=0 ; i<n ; i++)
		{
			if(s1[i]!='*')
			cout<<s1[i];
		}
	}
	return 0;
}
