#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int **p=new int*[5]; // tung phan tu la 1 mang con tro
	for(int i=0 ; i<5 ; i++)
		p[i]=new int[7]; // tuong duong vs cau lenh: *(p+i)=new int[7];	
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<7 ; j++)
		{
			p[i][j]=i+j; // tuong duong: *(*(p+i)+j)=i+j;
		}
	}
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<7 ; j++)
		{
			cout<<*(*(p+i)+j)<<"\t";
		}
		cout<<endl;
	}
	
	// huy bo nho
	for(int i=0 ; i<5 ; i++)
	{
		delete *(p+i);
		*(p+i)=NULL;	// neu muon chac cu hon
	}
	delete p;
	p=NULL; // neu muon chac cu hon
	return 0;
}
