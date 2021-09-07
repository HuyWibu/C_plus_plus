#include <iostream>
using namespace std;
long long fi(long long n)
{
    long long a1=1,a2=1;
    long long a3;
    if(n<3) return a1;
    else
    {
        for(int i=2;i<n;i++)
        {
            a3=a1+a2;
            a1=a2;
            a2=a3;
        }
        return a3;
    }
}
int main()

{
    int n;
    cin >> n;
    while (n--)
    {
        long long a;
        cin >> a;
        cout << fi(a) << endl;
    }
}
