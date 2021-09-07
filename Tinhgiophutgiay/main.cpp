#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	int hour,minute,second;
	cout<<"Moi bo nhap so giay: t=";
	cin>>t;
	hour=(t/3600)%24;
	int hourtemp=hour<12?hourtemp=hour:hourtemp=hour-12;
	minute=(t%3600)/60;
	second=(t%3600)%60;
	cout<<"Dinh dang gio:phut:giay la: "<<hourtemp<<":"<<minute<<":"<<second<<" ";
	hour<12?cout<<"AM":cout<<"PM";
	return 0;
}
