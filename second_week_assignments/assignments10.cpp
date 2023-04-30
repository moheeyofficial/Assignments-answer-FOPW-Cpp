//  التكليف االعاشر  في الأسبوع الثاني من كورس
// Fundamentals Of Programming With C++

/*
نريد عمل متغيريين عبارة عن المدخلات من المستخدم
المستخدم يقوم بإدخال رقم وبعده رقم آخر
المطلوب ايجاد حاصل ضرب الرقمين في بعضهم
شاهد المثال لترى النتيجة المطلوبة
*/

/*
#include <iostream>
using namespace std;

int main()
{
  // Write Your Code Here

  // Number One => 10
  // Number Two => 100
  // Needed Output 1000 [10 * 100]
  return 0;
}
*/

//          الحل

#include <iostream>
using namespace std;

int main()
{
    int fristNumber;
    int secondNumber;

    cout << "Write frist number   ";
    cin >> fristNumber;
    cout << "Write second number   ";
    cin >> secondNumber;
    int output = fristNumber * secondNumber;

    cout << fristNumber << " × " << secondNumber << " = " << output;
  return 0;
}