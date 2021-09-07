#include<iostream> 
#include<cstring> 
using namespace std; 
string s; 
int t,i,res; 
void process()
{ 
	res=0; 
	cin>>s; 
	for(i=0;i<s.size();i++)
	{ 
		if(s[i]=='1')
		{ 
			if(i%4==0) 
				res+=1; 
			else if(i%4==1) 
				res+=2; 
			else if(i%4==2) 
				res+=4; 
			else if(i%4==3) 
				res+=3; 
		} 
	} 
	if(res%5==0&&res!=0) 
		cout<<"Yes"; 
	else cout<<"No"; 
		cout<<endl; 
} 
int main()
{ 
	cin>>t; 
	while(t--)
	{ 
		process(); 
	} 
	return 0; 
}
