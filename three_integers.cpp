#include <iostream>
using namespace std;
int main()
{
   int n1,n2,n3,sum;
   cout << "ENTER THREE INTEGERS:" ;
   cin >> n1;
   cin >> n2;
   cin >> n3;
   sum = 2*(n1+n2+n3) + n3;
   cout << "TWICE THE SUM OF INTEGERS PLUS THIRD INTEGER : " << sum << endl;
   return 0;
}
