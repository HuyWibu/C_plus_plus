#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[100005];
int b[100005];
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n,q,dem=0;
		cin>>n>>q;
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
		}
		for(int i=0 ; i<q ; i++)
		{
			int l,r,sum=0;
			cin>>l>>r;
			for(int j=l-1 ; j<=r-1 ; j++)
			{
				sum+=a[j];
			}
			b[dem]=sum;
			dem++;
		}
		for(int i=0 ; i<dem ; i++)
		{
			cout<<b[i]<<endl;
		}
	}
	return 0;
}
