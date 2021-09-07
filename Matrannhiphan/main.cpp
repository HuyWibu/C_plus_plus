#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[100005][10];
int main(int argc, char** argv) {
	int n;
	cin>>n;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			cin>>a[i][j];
		}
	}
	int dem=0;
	for(int i=0 ; i<n ; i++)
	{
		int d=0;
		for(int j=0 ; j<3 ; j++)
		{
			if(a[i][j]==1)
			{
				d++;
			}
		}
		if(d>=2) dem++;
	}
	cout<<dem;
	return 0;
}
