#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int b[10005];
void sort(int b[],int n)
{
	for(int i=0 ; i<n-1 ; i++)
	{
		for(int j=i+1 ; j<n ; j++)
		{
			if(b[i]>b[j])
			{
				int temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		int dem=0;
		for(int i=0 ; i<k ; i++)
		{
			for(int j=0 ; j<n ; j++)
			{
				cin>>b[dem];
				dem++;
			}
		}
		sort(b,dem);
		for(int i=0 ; i<dem ; i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
