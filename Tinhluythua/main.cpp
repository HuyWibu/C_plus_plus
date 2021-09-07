#include<iostream> 
using namespace std; 
int main() 
{ 
	int n ; 
	cin >> n;
	while(n--) 
	{ 
		int a, b, p; 
		cin >> a >> b >> p; 
		int t = a % p; 	// t la co so thay cho a
		long long x = 1; 
		b %= p - 1; 
		for(int i = 1; i <= b; i++) 
		{ 
			x = x * t % p; 
		} 
		cout << x << endl; 
	} 
}
