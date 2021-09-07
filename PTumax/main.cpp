#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1000005];
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
		}
		int max=a[0];
		for(int i=0 ; i<n ; i++)
		{
			if(max<a[i]) max=a[i];
		}
		cout<<max<<endl;
	}
	return 0;
}
