#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int i=2;
		int dem,count=0;
		int d=0;
		int n;
		cin>>n;
		while(n>1)
		{
			dem=0;
			if(n%i==0)
			{
				count++;
				while(n%i==0)
				{
					dem++;
					n/=i;
				}
				if(dem>1)
				{
					d=1;
					cout<<"0"<<endl;
					break;
				}
				i++;
			}
			else 
				i++;
		}
		if(d==0)
		{
			if(count==3)
			{
				cout<<"1\n";
			}
			else
				cout<<"0\n";
		}	
	}
	return 0;
}
