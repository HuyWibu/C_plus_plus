#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
/*	int a,b,c;
	cout<<"Moi bo nhap do dai 3 canh tam giac:";
	cin>>a>>b>>c;
	cout<<"Chu vi cua tam giac la:"<<a+b+c<<endl;
*/
	int canhdoidien,chieucao;
	double S;
	cout<<"Moi bo nhap canh doi dien va chieu cao:"<<endl;
	cin>>canhdoidien>>chieucao;
	S=1.0/2*canhdoidien*chieucao;
	cout<<"Dien tich tam giac cua bo la:"<<S<<endl;
	return 0;
}
