#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char c;
	int k;
	cin>>c;
	k=(int)c;
	cout<<"Ma ASCII cua ky tu "<<c<<" la:"<<k<<endl;
	cout<<"Ky tu ke tiep cua "<<c<<" la:"<<(char)(k+1)<<endl;
	return 0;
}
