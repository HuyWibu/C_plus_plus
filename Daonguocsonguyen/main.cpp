#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t,sodao;
	int i=2;
	cin>>t;
	while(t)
	{
		int m=t%10;
		sodao=sodao+m*pow(10,i);
		t/=10;
		i--;
	}
	cout<<sodao;
	return 0;
}
