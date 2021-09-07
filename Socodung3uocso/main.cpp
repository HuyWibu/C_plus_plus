#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ktraNT(int n)
{
	if(n<2) return 0;
	else
	{
		for(int i=2 ; i<=sqrt(n) ; i++)
		{
			if(n%i==0) return 0;
		}
		return 1;
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(4<=n) cout<<4<<" ";
		for(int i=3 ; i*i<=n ; i+=2)
		{
			if(ktraNT(i))
			{
				cout<<i*i<<" ";	
			}	
		} 
		cout<<endl; 
	}
	return 0;
}
