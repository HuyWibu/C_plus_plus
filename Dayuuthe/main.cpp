#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ktra(int a[], int n)
{
	int chan=0;
	int le=0;
	for(int i=0 ; i<n ; i++)
	{
		if(a[i]%2==0)
		{
			chan++;
		}
		else
		{
			le++;
		}
		
	}
	if(chan>le) return 1;
	else	if(chan<le) return 2;
	else return 0;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int a[1005]={0};
		int x=0;
		do
		{
			cin>>a[x];
			x++;
		}
		while(getchar()!='\n');
		if((x%2==0 && ktra(a,x)==1)||(x%2!=0 && ktra(a,x)==2))
		{	
			cout<<"YES\n";
		}
		else
			cout<<"NO\n";
	}
	return 0;
}
