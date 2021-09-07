#include<iostream>
#include<math.h>
using namespace std;
int ktra(int n){
	if(n<2) return 0;
	int count =0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0&&i%2==0) {
			count ++;
			if((n/i)!=i && (n/i)%2==0) count++;
		}
}
	if(n%2==0) count++;
	return count;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<ktra(n)<<endl;
	}
	return 0;
}
