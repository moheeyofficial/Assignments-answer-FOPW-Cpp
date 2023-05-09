//  التكليف الثاني عشر  في الأسبوع الثالث من كورس
// Fundamentals Of Programming With C++

/*
لديك مجموعة من المتغيرات يجب عدم التعديل عليهم
لديك مجموعة من السطور كل سطر يخرج قيمة معينة
المطلوب إستبدال علامة الإستفهام بشيء مما تعلمته لتخرج النتيجة المطلوبة
ممنوع إستخدام اي شيء بعيدا عن المتغيرات
ممنوع تغيير العلامات الخاصة بالجمع والطرح والضرب
*/

/*
// Do Not Edit Here
short a = 1000;
int b = 10000;
long double c = 5.560000505012;

// Change ??? To Something Else To Get The Output
cout << ??? - ??? << "\n"; // 12
cout << ??? + ??? << "\n"; // 20
cout << ??? * ??? << "\n"; // 32
cout << ??? * ??? << "\n"; // 5000
cout << char(??? * ???) << "\n"; // P
*/
 
 //         الحل 

 #include <iostream>
using namespace std;

int main()
{
// Do Not Edit Here
short a = 1000; //2
int b = 10000; //4
long double c = 5.560000505012; //16

// Change ??? To Something Else To Get The Output
cout << sizeof(c) - sizeof(b) << "\n"; // 12
cout << sizeof (b) + sizeof(c) << "\n"; // 20
cout << sizeof (c) * sizeof(a) << "\n"; // 32
cout << (int)c * a << "\n"; // 5000
cout << char(sizeof(c) * int(c)) << "\n"; // P  = 80

}