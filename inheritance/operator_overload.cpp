#include <iostream>
using namespace std;
class Complex
{
   private:
      int real, imag;
   public:
      Complex(int r=0,int i=0)
      {
         real = r;
         imag = i;
      }
   Complex operator + (Complex const &obj)
   {
      Complex res;
      res.real = real+obj.real;
      res.imag = imag+obj.imag;
      return res;
   }
   void print()
   {
      cout << "THE RESULTANT COMPLEX NUMBER IS :" << real << " + " << imag << " j " << endl;
   }
};
int main()
{
   Complex c1(2,4),c2(5,3);
   Complex c3 = c1+c2;
   c3.print();
}
