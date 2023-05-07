//  التكليف الثالث في الأسبوع الثالث من كورس 
// Fundamentals Of Programming With C++

/*
بإستخدام مكونات اللغة قم بطباعة ما يلي
السطر الأول Maximum Integer Number
السطر الثاني Minimum Integer Number
السطر الثالث Maximum Short Integer Number
السطر الرابع Minimum Short Integer Number
قم بطباعة كلمة Maximum أو Minimum قبل الرقم كما في المثال
*/

/*
// Output Needed
"Maximum Integer Number Is => 2147483647"
"Minimum Integer Number Is => -2147483648"
"Maximum Short Integer Number Is => 32767"
"Minimum Short Integer Number Is => -32768"
*/

//                  الحل 

#include <iostream>
#include <limits.h>

using namespace std ;

int main ()
{
    // Output Needed
    cout << "Maximum Integer Number Is =>\t" << INT_MAX << endl;
    cout << "Minimum Integer Number Is =>\t" << INT_MIN << endl ;
    cout << "Maximum Short Integer Number Is =>\t" << SHRT_MAX << endl;
    cout <<"Minimum Short Integer Number Is =>\t" << SHRT_MIN << endl;
 
 return 0;
}