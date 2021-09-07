#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int a[100005];
		int n;
		cin>>n;
		for(int i=0 ; i<n ; i++)
			cin>>a[i];
		int min=10000005;
		int kq;
		for(int i=0 ; i <n-1 ; i++)
		{
			for(int j= i+1 ; j<n ; j++)
			{
				int x=abs(a[i]+a[j]);
				if(min>x) 
				{
					min=x;
					kq=a[i]+a[j];
				}
			}
		}
		cout<<kq<<endl;
		
	}
	return 0;
}
