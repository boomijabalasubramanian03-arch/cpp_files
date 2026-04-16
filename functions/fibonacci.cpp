#include <iostream>
using namespace std;
int fib(int num)
i{
   if (num==0)
      return 0;
   else if (num==1)
      return 1;
   else
      return fib(num-1)+fibo(num-2);
}
int main()
{
   int num;
   cout << "ENTER THE NUMBER:" << endl;
   cin >> num;
   int t=num;
   cout << "THE FIBONACCI SERIES " << endl;
   while (t>0)
      cout << fib(num) << endl;
      t -= 1;
   return 0;
}
