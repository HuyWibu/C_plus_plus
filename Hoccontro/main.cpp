#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	int *p;
//	p=new int; // cap phat bo nho cho con tro p
//	*p=100;	// gan gia tri bang 100 tai o nho ma p dang tro toi
//	cout<<"Dia chi tai con tro p= "<<p<<endl;
//	cout<<"Gia tri tai dia chi ma con tro p tro toi = "<<*p<<endl;
//	delete p; // bi loi memory leak neu ko thu hoi bo nho
	int count=100;
	int *p=&count;
	cout<<"Dia chi cua count la: "<<&count<<endl;
	cout<<"Gia tri cua count la: "<<count<<endl;
	cout<<"Dia chi cua con tro p luc nay la: "<<p<<endl;
	cout<<"Gia tri cua con tro p luc nay la: "<<*p<<endl;
	int *x=p;
	cout<<"Dia chi cua con tro x luc nay la: "<<x<<endl;
	cout<<"Gia tri cua con tro x luc nay la: "<<*x<<endl;
	*x=15;
	cout<<"Gia tri cua con tro p luc nay la: "<<*p<<endl;
	cout<<"Gia tri cua count la: "<<count<<endl;
	return 0;
}
