#include <iostream>
using namespace std;
int main ()
{
  int x, y;
  cin >> x >> y;
  try
  {
    if (y==0)
      throw 0;
    cout << "Result is " << x / y; 
  }
  catch(int x)
  {
    cout << "Divisor is Zero";
  }
  return 0;
}