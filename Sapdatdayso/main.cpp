#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long a[1000005],b[1000005];
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		for(long long i=0 ; i<n ; i++)
		{
			cin>>a[i];
		}
		for(long long i=0 ; i<n ; i++)
		{
			b[i]=-1;
		}
		for(long long i=0 ; i<n ; i++)
		{
			for(long long j=0 ; j<n ; j++)
			{
				if(i==a[j])
				{
					b[i]=i;
				}
			}
		}
		for(long long i=0 ; i<n ; i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
