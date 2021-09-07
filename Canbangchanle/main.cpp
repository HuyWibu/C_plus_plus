#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ktracl(int n)
{
	int c=0,l=0;
	while(n)
	{
		int m=n%10;
		if(m%2==0) c++;
		else	l++;
		n/=10;
	}
	if(c==l) return 1;
	else	return 0;
}
int main(int argc, char** argv) {
	int n,d=0;
	cin>>n;
	if(n==2||n==4||n==6)
	{
		int l=pow(10,n-1);
		int k=pow(10,n);
		for(int i=l ; i<k ; i++)
		{
			if(ktracl(i)!=0) 
			{
				cout<<i<<" ";
				d++;
				if(d==10)
				{
					cout<<endl;
					d=0;
				}
			}
		}
	}
	return 0;
}
