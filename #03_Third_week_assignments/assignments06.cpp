//  التكليف السادس في الأسبوع الثالث من كورس
// Fundamentals Of Programming With C++

/*
لديك 6 متغيرات نوعهم int
ونريد طباعة ال Character
 الذي يمثله هذا الرقم

 نحتاج لأن تكون الرسالة كما في المثال
 ولا تكتب القيمة بيدك وإستخدم المتغيرات

في السطر الأخير إستخدم
قيم المتغيرات لتخرج بالكلمة المطلوبة
"Elzero"
*/

/*
int a = 69;
int b = 108;
int c = 122;
int d = 101;
int e = 114;
int f = 111;

// Output Needed
"Character Of This ASCII Value 69 Is E"
"Character Of This ASCII Value 108 Is l"
"Character Of This ASCII Value 122 Is z"
"Character Of This ASCII Value 101 Is e"
"Character Of This ASCII Value 114 Is r"
"Character Of This ASCII Value 111 Is o"

// Output Needed In Last Line
"Elzero"
*/

//              الحل

#include <iostream>
using namespace std;
int main()
{
    int a = 69;
    int b = 108;
    int c = 122;
    int d = 101;
    int e = 114;
    int f = 111;

    cout << "Character Of This ASCII Value 69 Is " << char(a) << endl;
    cout << "Character Of This ASCII Value 108 Is " << char(b) << endl;
    cout << "Character Of This ASCII Value 122 Is " << char(c) << endl;
    cout << "Character Of This ASCII Value 101 Is " << char(d) << endl;
    cout << "Character Of This ASCII Value 114 Is " << char(e) << endl;
    cout << "Character Of This ASCII Value 111 Is " << char(f) << endl;

    cout <<"\n"<< char(a)<< char(b)<< char(c)<< char(d)<< char(e)<< char(f) << endl;
}
