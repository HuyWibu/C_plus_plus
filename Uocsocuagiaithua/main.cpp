#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n,p;
		int dem=0;
		cin>>n>>p;			
		for(int i=p ; i<=n ; i+=p)
		{
			int tg=i;
			while(tg%p==0)
			{
				dem++;
				tg/=p;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
