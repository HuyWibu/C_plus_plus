#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a=5;
//	int *p;
	void *p;
	p=&a;
	cout<<a<<" ";
	(*(int*)p)=100;
	cout<<a;
	return 0;
}
