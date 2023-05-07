//  التكليف السابع في الأسبوع الثالث من كورس
// Fundamentals Of Programming With C++

/*
لديك بعض المتغيرات التي تحتوي على أرقام

نحتاج لإستخدام ما تعلمته لتخرج لنا كلمة EWS
كما في المثال

ممنوع إستخدام أي قيم خارج قيم المتغيرات الموجودة
وممنوع تغيير قيم المتغيرات

يمكنك إستخدام ال Operator
الخاص بالجمع والطرح فقط "+" و "-"
*/

/*
int a = 1;
int b = 13;
int c = 17;
int d = 70;

// Output Needed
"EWS"
*/

//              الحل

#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 13;
    int c = 17;
    int d = 70;

    /*
        069  => E
        087  => W
        083  => S
    */

    cout << "\n"
         << char(d-a) << char(d+c) << char(d+b)  << endl;

    return 0;
}
