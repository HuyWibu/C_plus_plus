#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	cin.ignore();
	string a[100000];
	int dem=0;
	int b[100000]={0};
	for(int i=0 ; i<n ; i++)
	{
		getline(cin,a[i]);
	}
	for(int i=0 ; i<n-1 ; i++)
	{
		for(int j=i+1 ; j<n ; j++)
		{
			if(a[i]==a[j]) b[j]=1;
		}
	}
	for (int i = 0; i < n ; i++)
    {
        if(b[i]==0) dem++;
    }
    cout << dem << endl;
	return 0;
}
