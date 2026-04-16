#include <iostream>
using namespace std;
class CStudent
{
   // state or data members
   private:
      int admno;
      string name;
      float CGPA;
   public:
      CStudent(); // default constructor
      CStudent(int,string,float); // parameterized constructor
      void get();
      void display(); // member function
};
CStudent::CStudent() // default
{
   admno = 20800;
   name = "Boomi";
   CGPA = 8.8;
}
CStudent::CStudent(int adno,string n,float cgpa) // parameterized
{
   name = n;
   admno = adno;
   CGPA = cgpa;
}

// member functions

void CStudent::get()
{
   cout << "ENTER NAME:" << endl;
   cin >> name;
   cout << "ENTER ADMNO:" << endl;
   cin >> admno;
   cout << "ENTER THE CGPA :" << endl;
   cin >> CGPA;
}
void CStudent::display()
{
   cout << "DETAILS OF THE STUDENT" << endl;
   cout << "NAME : " << name << endl;
   cout << "ADMISSION NUMBER : " << admno << endl;
   cout << "CGPA : " << CGPA << endl;
}
int main()
{
   CStudent stud1,stud2;

   // 1st way : using member function

   /*stud1.get();
   stud1.display();
   stud2.get();
   stud2.display();*/

   // 2nd way : using parameterized constructor

   /*int adno;
   float cgpa;
   string n;
   cout << "ENTER NAME:" << endl;
   cin >> n;
   cout << "ENTER ADMNO:" << endl;
   cin >> adno;
   cout << "ENTER CGPA:" << endl;
   cin >> cgpa;
   CStudent stud3(adno,n,cgpa);
   stud3.display();*/

   // static collection (Array of objects)

   /*int i;
   CStudent IICSEC[3];
   for (i=0;i<3;i++)
   {
      cout << "ENTER STUDENT DETAIL " << i << ":" << endl;
      IICSEC[i].get();
   }
   for (i=0;i<3;i++)
   {
      cout << "STUDENT DETAIL " << i << ":" << endl;
      IICSEC[i].display();
   }*/

   // pointer to an object

   CStudent *IICSEA;
   int num,i;
   cout << "ENTER TOTAL NUMBER OF STUDENTS:" << endl;
   cin >> num;
   IICSEA = new CStudent[num];
   for (i=0;i<num;i++)
   {
      cout << "ENTER STUDENT DETAIL " << i << ":" << endl;
      IICSEA[i].get();
   }
   for (i=0;i<num;i++)
   {
      cout << "STUDENT DETAIL " << i << ":" << endl;
      IICSEA[i].display();
   }

   return 0;
}

