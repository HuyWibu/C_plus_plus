#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		long long n;		// 1 0 3 9 5 1 2 3 5
		cin>>n;
		int sum;
		do
		{
			sum=0;
			while(n)
			{
				int m=n%10;
				sum+=m;
				n/=10;
			}
			if(sum<10)
			{
				break;
			}
			n=sum;
		}while(true);
		cout<<sum<<endl;
	}
	return 0;
}
