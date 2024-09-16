#include <bits/stdc++.h>
using namespace std;
int main ()
{
  try 
  {
    try 
    {
      throw 20;

    }
    catch (int n)
    {
      cout << "inner catch";
    }
  }
  catch (int x)
  {
    cout << "out";
  }
  return 0;
}
