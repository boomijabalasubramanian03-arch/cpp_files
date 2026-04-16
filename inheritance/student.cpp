#include <iostream>
using namespace std;
class Student
{
   public:
      string name;
      int rn;
      Student()
      {
         cout << "STUDENT CLASS " << endl;
      }
      void display()
      {
         cout << "NAME : " << name << endl;
         cout << "ROLLNO : " << rn << endl;
      }
};
class Course:pubilc Student
{
   public:
      string dep;
      void display
      {
        Student.display();
        cout << "DEPARTMENT : " << dep << endl;
      }
};
int main()
{
   Course obj;
   return 0;
}
