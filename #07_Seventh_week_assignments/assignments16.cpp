//  التكليف السادس عشر في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
يجب طباعة الأرقام كما في المثال
ممنوع إستخدام الأرقام نهائيا ويمكنك إستخدام قيم المتغيرات مع ما تعلمته لتنفيذ المطلوب
قم بكتابة ال Code الخاص بك داخل ال Loop فقط ولا تقم بالتعديل على أي شيء آخر

int index = 10;
int jump = 2;

for (;;)
{
  // Write Your Code Here
}

// Output Needed
10
8
6
4
*/
#include <iostream>
using namespace std;

int main()
{
    int index = 10;
    int jump = 2;

    for (;;)
    {
        cout << index << endl;
        index -= jump;
        if (index < 4)
        {
            break;
        }
    }

    return 0;
}