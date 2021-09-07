#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fibo(int n)
{
	if(n<=2) return 1;
	return fibo(n-1)+fibo(n-2);
}
void xuatdayfibo(int n)
{
	for(int i=1 ; i<=n ; i++)
	{
		cout<<fibo(i)<<" ";
	}
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
//	cout<<fibo(n);
	xuatdayfibo(n);
	return 0;
} 
