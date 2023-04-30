//  التكليف االتاسع في الأسبوع الثاني من كورس
// Fundamentals Of Programming With C++

/*
نريد عمل متغير يقبل المدخلات من المستخدم في السطر الأول
بعدها نقوم بطباعة حاصل ضرب الرقم في نفسه
شاهد المثال والنتيجة لتفهم الفكرة
*/

/*
#include <iostream>
using namespace std;

int main()
{
  // Write Your Code Here

  // Num 10
  // Needed Output 100 [10 * 10]
  return 0;
}
*/

//          الحل

#include <iostream>
using namespace std;

int main()
{
    cout << "Write number  \n ";
    int num;
    cin >> num;
    int output = num * num;

    cout << num << " × " << num << " = " << output;
    return 0;
}