#include <bits/stdc++.h>
using namespace std;
int main ()
{
  try 
  {
    throw 'a';
  }
  catch (int param)
  {
    cout << "int exception "<< "\n";
  }
  catch (...)
  {
    cout << "default execption";
  }
  cout << "after exection";
  return 0;
}