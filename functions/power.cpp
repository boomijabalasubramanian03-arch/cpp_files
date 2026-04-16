#include <iostream>
using namespace std;
int power(int base,int exp)
{
   if (exp<1)
      return 1;
   else
      return base*power(base,exp-1);
}
int main()
{
   int base,exp;
   cout <<" ENTER BASE VALUE:" << endl;
   cin >> base;
   cout << "ENTER EXPONENT VALUE:" << endl;
   cin >> exp;
   int res = power(base,exp);
   cout << "VALUE OF " << base << " TO THE POWER OF " << exp << " IS " << res << endl;
   return 0;
}
