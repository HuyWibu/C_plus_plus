#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ktra(int a[], int l, int r)
{
	int i = l;
    while (i < r && a[i] <= a[i + 1])
        ++i;
    if (i == r)
        return 1;
    else
    {
        while (i < r && a[i] > a[i + 1])
            ++i;
        if (i < r)
            return 0;
        else
            return 1;
    }
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int a[10005];
		int n,l,r;
		cin>>n;
		for(int i=0 ; i<n ; i++)
			cin>>a[i];
		cin>>l>>r;
		if(ktra(a,l,r))
		{
			cout<<"Yes";
		}
		else
			cout<<"No";
		cout<<endl;
	}
	return 0;
}
