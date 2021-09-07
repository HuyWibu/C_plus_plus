#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int i=0;
	cin>>n;
	while(i<n)
	{
		for(int j=0 ; j<n ; j++)
		{
			if(j==0||i==n-1||i==j)
				cout<<"*";
			else
				cout<<" ";
		}
		i++;
		cout<<endl;
	}
	return 0;
}
