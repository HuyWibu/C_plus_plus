#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char s[100];
     cin.getline(s, 100);
    char a[100][100];
    for(int i=0 ; i<strlen(s) ; i++)
    {
    	if(s[i]>='A'&&s[i]<='Z')
    	{
    		s[i]+=32;
		}
	}
    int n=0,m=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        {
            while(s[i]==' ')
            {
                i++;
            }
            m=0;
            n++;
            i--;
        }
        else
        {
            a[n][m]=s[i];
            m++;
        }
    }
    for(int i=n; i>=0 ; i--)
    {
    	if(i==n)	cout<<a[i];
    	break;
	}
	for(int i=0 ; i<=n ; i++)
	{
		if(i!=n)
		{
			cout<<a[i][0];
		}
		else break;
	}
	cout<<"@ptit.edu.vn\n";
    
}
