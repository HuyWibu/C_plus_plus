#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int a[10005];
		int n;
		int max=-1;
		cin>>n;
		for(int i=0 ; i<n ; i++)
			cin>>a[i];
		for(int i=1 ; i<n ; i++)
		{
			for(int j=i-1 ; j>=0 ; j--)
			{
				int k=a[i]-a[j];
				if(k>max) max=k;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
