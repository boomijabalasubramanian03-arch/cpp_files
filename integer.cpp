#include <iostream>
using namespace std;
int main()
{
   int n1;
   double n2;
   cout << "Enter a double:" ;
   cin >> n1;
   cout << "Enter a positive integer :" ;
   cin >> n2;
   while (n1<1)
   {
      cerr << "ERROR 1 = " << n1 << endl;
      cout << " Enter a positive integer:" ;
      cin >> n1;
   };
   double ans;
   ans = n1*n2;
   cout << "The value of " << n2 << n1 << "=" << ans << endl;
   return 0;
}
