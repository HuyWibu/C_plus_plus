#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i=2;
		while(n>1)
		{
			int dem=0;
			if(n%i==0)
			{
				while(n%i==0)
				{
					n/=i;
					dem++;
				}
				cout<<i<<" ";
				cout<<dem<<" ";
			}
			i++;
		}
		cout<<endl;
	}
	return 0;
}
