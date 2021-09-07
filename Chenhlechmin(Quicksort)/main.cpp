#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[10000005];
void QuickSort(int a[], int left, int right)
{
	if(left>=right) return;// mang a co 1 ptu hoac khong co phan tu nao .vi du [10,0]
	else if(left+1==right) // mang a co 2 ptu		[0,1] ---> 0+1=1;
	{
		if(a[left]>a[right])
		{
			int temp=a[left];
			a[left]=a[right];
			a[right]=temp;
		}
	}
	else
	{
		int pivot=a[right];
		int L=left-1;			// neu minh nhap [0,7] voi n=8 ---> L=-1	
		for(int j=left ; j<right ; j++)
		{
			if(a[j]<=pivot)
			{
				L++;
				int temp=a[L];
				a[L]=a[j];
				a[j]=temp;
			}
		}
		int temp=a[L+1];
		a[L+1]=a[right];
		a[right]=temp;
		QuickSort(a,left,L);
		QuickSort(a,L+2,right);
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
		}
		QuickSort(a,0,n-1);
		int min=10000005;
		for(int i=0 ; i<n-1 ; i++)
		{
			int x=a[i+1]-a[i];
			if(min>x) min=x;
		}
		cout<<min<<endl;
	}
	return 0;
}
