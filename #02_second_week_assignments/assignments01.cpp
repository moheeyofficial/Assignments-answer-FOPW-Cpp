//  التكليف الأول في الأسبوع الثاني من كورس 
// Fundamentals Of Programming With C++ 

/*
قم بتعريف المتغيرات في بداية الكود 
لتظهر النتائج كما في المخرجات

لا تقم بالتعديل على السطرين تحت التعليق

السطر الثالث غير موجود ويجب أن تكتبه لتظهر جميع المخرجات كما في المثال
*/
/*
#include <iostream>
using namespace std;

int main()
{
  // Write Your Code Here


  // Do Not Edit The Next 2 Lines
  cout << "My Age Is: " << age << "\n";
  cout << period << " Years Ago My Age Was: " << age - period << "\n";

  // Add The Third Line Below

  return 0;
}
*/

/*
// Output

"My Age Is: 40"
"10 Years Ago My Age Was: 30"
"After 10 Years My Age Will Be: 50"
*/

//      الحل

#include <iostream>
using namespace std;

int main()
{
    int age = 40 ;
    int period = 10 ;


  cout << "My Age Is: " << age << "\n";
  cout << period << " Years Ago My Age Was: " << age - period << "\n";
  cout << period << " After 10 Years My Age Will Be: " << age + period << "\n";

  return 0;
}