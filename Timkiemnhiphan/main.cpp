#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int binarysearch(int a[],int l, int r, int x)
{
	if(r>=l)
	{
			int mid=l+(r-l)/2;			// tuong duong vs (l+r)/2 nhung uu diem tranh tran so khi r, l lon
		if(a[mid]==x)
			return mid;
		if(a[mid]>x)
			return binarysearch(a,l,mid-1,x);
		return binarysearch(a,mid+1,r,x);
	}
	return -1;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int a[100005];
		int n, x;
		cin>>n>>x;
		for(int i=0 ; i<n ; i++)
			cin>>a[i];
		sort(a,a+n);
		int kq=binarysearch(a,0,n-1,x);
		if(kq!=-1)
			cout<<kq<<endl;
	}
	return 0;
}
