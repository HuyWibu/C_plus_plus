#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if(b==0) cout << "-1 -1";
    else
    {
        if (a * 9 < b)				// a la so chu so  . . . b la tong 		a=2 , b=15
        cout << "-1 -1";
	    else
	    {
	        string max, min;
	        int m = b;				// m=15
	        for (int i = 0; i < a; i++)
	        {
	            if (m > 9)
	            {
	                max += char(9 + '0');
	                m -= 9;
	            }
	            else
	            {
	                max += char(m + '0');
	                m = 0;
	            }
	        }
	        for (int i = a - 1; i >= 0; i--)
	        {
	            if (b > 9)
	            { 
	                min = char(9 + '0') + min;
	                b -= 9;
	            }
	            else
	            {
	                if (i == 0)
	                {
	                    min = char(b + '0') + min;
	                }
	                else
	                {
	                    if (b != 1)
	                    {
	                        min = char(b - 1 + '0') + min;
	                        b = 1;
	                    }
	                    else
	                    {
	                        min = '0' + min;
	                    }
	                }
	            }
	        }
	        cout << min << " " << max;
	    }
    }
}
