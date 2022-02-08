#include <iostream>
#include <string>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int number = 666;
  string tmp = "";
  
  while (true)
  {
    tmp = to_string(number);
    if (tmp.find("666") != string::npos)
    {
      N--;
    }
    if (N == 0)
    {
      break;
    }
    number++;
  }
  cout << tmp;
  system("pause");
}
