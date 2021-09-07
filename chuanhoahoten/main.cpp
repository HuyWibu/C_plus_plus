#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char s[100];
	char a[100][100]={0};
	cin.getline(s,100);
	int n=0,m=0;
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
	for(int i=0 ; i<=n ; i++)
	{
		if(a[i][0]>='a'&&a[i][0]<='z')
		{
			a[i][0]-=32;
		}
		if(i==n)
		{
			for(int j=0 ; j<=m ; j++)
			{
				if(a[i][j]>='a'&&a[i][j]<='z')
				{
					a[i][j]-=32;
				}
			}
		}
	}
	for(int i=0 ; i<=n ; i++)
	{
		if(i!=n-1)
		{
			cout<<a[i]<<" ";
		}
		else
		{
			cout<<a[i]<<", ";
		}
	}
	cout<<endl;
	return 0;
}
