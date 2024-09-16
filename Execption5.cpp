#include <bits/stdc++.h>
using namespace std;
class arraysizeZero {};
class arraysizeNegative {};
int average (int arr [], int n)
{
  if (n==0)
    throw arraysizeZero();
    if ( n < 0 )
      throw arraysizeNegative();
    int sum = 0;
    for (int i = 0; i < n;i ++)
    {
      sum = sum + arr[i];
      int res = sum / n;
      return res;
    }
}
int main ()
{
  int n;
   cin >> n;
   int arr[n];
   for (int  i = 0; i < n; i++)
   {
     cin >> arr[i];
     try 
     {
       int res = average(arr, n);
       cout << res;
     }
     catch (arraysizeNegative &e1)
     {
       cout << "Array size Negative";
     }
     catch (arraysizeZero &e2)
     {
       cout << "Array size Zero ";
     }
     cout << "\nBye\n";
   }
   return 0;
}