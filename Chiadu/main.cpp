#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int a,m;
		int d=0;
		cin>>a>>m;
		for(int i=0 ; i<m ; i++)
		{
			if((i*a)%m==1)
			{
				cout<<i<<endl;
				d=1;
				break;
			}
		}
		if(d==0) cout<<"-1\n";
	}
	return 0;
}
