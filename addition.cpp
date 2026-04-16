#include <iostream>
using namespace std;
int add(int,int);
int add(int n1, int n2)
{
   return n1+n2;
}
int main()
{
   int n1,n2,sum;
   cout << "ENTER THE TWO NUMBERS :" << endl;
   cin >> n1 >> n2;
   sum = add(n1,n2);
   cout << "ADDITION OF TWO NUMBERS " << n1 << " AND " << n2 << " IS " << sum << endl;
   return 0;
}
