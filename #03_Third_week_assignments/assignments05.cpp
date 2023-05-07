//  التكليف الخامس في الأسبوع الثالث من كورس 
// Fundamentals Of Programming With C++

/*
لديك 4 متغيرات نوعهم char
 ونريد طباعة ال ASCII Value الخاصة بهم

 نحتاج لأن تكون الرسالة كما في المثال
  ولا تكتب القيمة بيدك وإستخدم المتغيرات
*/

/*
char a = '~';
char b = '&';
char c = '%';
char d = 'A';

// Output Needed
"ASCII Value of ~ Is 126"
"ASCII Value of & Is 38"
"ASCII Value of % Is 37"
"ASCII Value of A Is 65"
*/

//              الحل 

#include <iostream>
using namespace std;
int main ()
{
char a = '~';
char b = '&';
char c = '%';
char d = 'A';

cout << "ASCII Value of ~ Is " << int(a)<< endl;
cout <<"ASCII Value of & Is "  << int (b) << endl;
cout <<"ASCII Value of % Is "  << int (c) << endl;
cout << "ASCII Value of A Is "  << int (d) << endl;

return 0;
}


