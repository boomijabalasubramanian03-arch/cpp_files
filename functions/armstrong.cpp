#include <iostream>
#include <cmath>
using namespace std;
int arms(int num)
{
   int l,t;
   t = num;
   while (num>0)
   {
      l += 1;
      num /= 10;
   }
   int temp = t,res,rem;
   while (t>0)
      rem = t % 10;
      cout << rem << endl;
      res = res + pow(rem,l);
      t /= 10;
      cout << res << endl;
   if (res==temp)
      return 1;
   else
      return 0;
}
int main()
{
   int num;
   cout << "ENTER THE NUMBER:" ;
   cin >> num;
   int answer;
   answer = arms(num);
   if (answer==1)
      cout << "THE NUMBER "<< num << " IS AN ARMSTRONG NUMBER" << endl;
   else
      cout << "THE NUMBER "<< num << " IS NOT AN ARMSTRONG NUMBER" << endl;
   return 0;
}
