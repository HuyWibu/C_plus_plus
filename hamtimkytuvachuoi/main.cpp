#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char s[100];
	char s1[100];
	cin.getline(s,100);
	cin.getline(s1,100);
	char *p=strstr(s,s1);
	if(p==NULL)
	{
		cout<<"Khong tim thay chuoi l!!!"<<endl;
	}
	else
	{
		cout<<"Tim thay chuoi o vi tri so: "<<p-s<<endl;
	}
	return 0;
}
