#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int val1;
  char str1[20] = "1234567";
  val1=atoi(str1);
  cout << "String value = " << str1 << ", Int value = " << val1 << endl;

  int val2;
  char str2[20] = "STDIO.VN";
  val2 = atoi(str2);
  cout << "String value = " << str2 << ", Int value = " << val2 << endl;

  return 0;
}
