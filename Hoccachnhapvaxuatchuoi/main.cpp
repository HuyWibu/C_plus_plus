#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str1[25];
	cout<<"Moi ban nhap chuoi: ";
	cin.getline(str1,25);
	cout<<"Chuoi ban nhap la: ";
	puts(str1);
	
	char *s2=new char[25];
	cout<<"Moi ban nhap chuoi: ";
	cin.getline(s2,25);
	cout<<"Chuoi ban nhap la: ";
	cout<<s2<<endl;
	cout<<"Kich thuoc thuc su ban nhap:"<<strlen(s2)<<endl;	
	return 0;
}
