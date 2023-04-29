//  التكليف االخامس في الأسبوع الثاني من كورس
// Fundamentals Of Programming With C++

/*
قم بإضافة سطر برمجي يجعل البرنامج يخرج لك الرقم 300
يجب عدم إضافة أي رقم نهائيا في السطر المكتوب
*/

/*
#include <iostream>
using namespace std;

int main()
{
  // Do Not Edit Below
  int a, b, c = 100;

  // Add Your Code Here


  // Do Not Edit Below
  cout << a + b + c; // 300
  return 0;
}
*/

//      الحل

#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 100;
    a = b = c;
    cout << a + b + c;
    return 0;
}