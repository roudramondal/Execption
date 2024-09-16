#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int x = -1;
  try 
  {
    cout << "inside try n";
    if(x  < 0)
    {
      throw x;
      cout << "after throw n";
    }
  }

catch (int x)
{
  cout << "exception caughtn";
}
cout << "Aftar ";
return 0;
}