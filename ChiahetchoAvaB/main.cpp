#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,a,b;
		cin>>m>>n>>a>>b;
		int dem=0;
		for(int i=m ; i<=n ; i++)
		{
			if(i%a==0||i%b==0)
			dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}
