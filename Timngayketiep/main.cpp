#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// ngay 1--->31 ngay
	// thang 1--->12 thang 
	// bn cx dc
	int ngay,thang,nam;
	cout<<"Moi bo nhap ngay:";
	cin>>ngay;
	cout<<"Moi bo nhap thang:";
	cin>>thang;
	cout<<"Moi bo nhap nam:";
	cin>>nam;
	if(ngay<28)
	{
		cout<<"Ngay ke tiep la: "<<ngay+1<<":"<<thang<<":"<<nam<<"";
	}
	else if(ngay==28)
	{
		if(thang!=2)
		{
			cout<<"Ngay ke tiep la: "<<ngay+1<<":"<<thang<<":"<<nam<<"";
		}
		else
		{
			if((nam%4==0&&nam%100!=0)||(nam%400==0))
			{
				cout<<"Ngay ke tiep la: "<<ngay+1<<":"<<thang<<":"<<nam<<"";
			}
			else
			{
				cout<<"Ngay ke tiep la: 1:"<<thang+1<<":"<<nam<<"";
			}
		}
	}
	else if(ngay==29)
	{
		if(thang!=2)
		{
			cout<<"Ngay ke tiep la: "<<ngay+1<<":"<<thang<<":"<<nam<<"";
		}
		else
		{
			if((nam%4==0&&nam%100!=0)||(nam%400==0))
			{
				cout<<"Ngay ke tiep la: 1:"<<thang+1<<":"<<nam<<"";
			}
			else
			{
				cout<<"Nam "<<nam<<" khong phai nam nhuan thi lay dau ra 29 ngay???";
			}
		}
	}
	else if(ngay==30)
	{
		if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12)
		{
			cout<<"Ngay ke tiep la:"<<ngay+1<<":"<<thang<<":"<<nam<<"";
		}
		else if(thang==2)
		{
			cout<<"Thang 2 co 30 ngay cmm a?? Ngu dot!!!";
		}
		else
		{
			cout<<"Ngay ke tiep la: 1:"<<thang+1<<":"<<nam<<"";
		}
	}
	else if(ngay==31)
	{
		if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10)
		{
			cout<<"Ngay ke tiep la: 1:"<<thang+1<<":"<<nam<<"";
		}
		else if(thang==2)
		{
			cout<<"Thang 2 co 31 ngay cmm a?? Ngu dot!!!";
		}
		else if(thang==12)
		{
			cout<<"Ngay ke tiep la: 1:1:"<<nam+1<<"";
		}
		else
		{
			cout<<"Thang "<<thang<<" co 31 ngay cmma?? Ngu dot!!!";
		}
	}
	else
	{
		cout<<"Mot thang co 31 ngay la nhieu nhat roi thang oc ba dau!!!";
	}
	return 0;
}
