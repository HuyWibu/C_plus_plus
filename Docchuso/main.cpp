#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,k=0;
	cin>>n;
	if(n<10)
	{
		switch(n)
		{
			case 0:
				cout<<"Khong";
				break;
			case 1:
				cout<<"Mot";
				break;
			case 2:
				cout<<"Hai";
				break;
			case 3:
				cout<<"Ba";
				break;
			case 4:
				cout<<"Bon";
				break;
			case 5:
				cout<<"Nam";
				break;
			case 6:
				cout<<"Sau";
				break;
			case 7:
				cout<<"Bay";
				break;
			case 8:
				cout<<"Tam";
				break;
			case 9:
				cout<<"Chin";
				break;
		}
	}
	else if(n>10&&n<100)
{
	int t,d;
	d=n%10;
	t=n-d;
	switch(t)
	{
		case 10:
			cout<<"Muoi";
			break;
		case 20:
			cout<<"Hai muoi ";
			break;
		case 30:
			cout<<"Ba muoi ";
			break;
		case 40:
			cout<<"Bon muoi ";
			break;
		case 50:
			cout<<"Nam muoi ";
			break;
		case 60:
			cout<<"Sau muoi ";
			break;
		case 70:
			cout<<"Bay muoi ";
			break;
		case 80:
			cout<<"Tam muoi ";
			break;
		case 90:
			cout<<"Chin muoi ";
			break;
	}
	switch(d)
	{
		case 1:
			cout<<"mot";
			break;
		case 2:
			cout<<"hai";
			break;
		case 3:
			cout<<"ba";
			break;
		case 4:
			cout<<"bon";
			break;
		case 5:
			cout<<"lam";
			break;
		case 6:
			cout<<"sau";
			break;
		case 7:
			cout<<"bay";
			break;
		case 8:
			cout<<"tam";
			break;
		case 9:
			cout<<"chin";
			break;
	}
}	
	else
	{
		cout<<"Deo phai 2 chu so bo deo doc!!!";
	}
	return 0;
}
