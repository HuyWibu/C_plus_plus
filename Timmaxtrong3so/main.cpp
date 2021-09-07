#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	int max=a;
	cin>>a>>b>>c;
	if(max<b) max=b;
	if(max<c) max=c;
	cout<<max;
	return 0;
}
