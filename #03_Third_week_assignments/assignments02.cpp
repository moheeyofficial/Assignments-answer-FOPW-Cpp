//  التكليف الثاني في الأسبوع الثالث من كورس 
// Fundamentals Of Programming With C++

/*
لدينا المتغير التالي ونوعه Double

في السطر الأول نريد إيجاد طريقة لإظهار عدد ال Bytes كما في المثال

في السطر الثاني نريد إيجاد طريقة لإظهار عدد ال Bits كما في المثال
*/

/*
double salary = 5000.98;
// 8 Bytes
// 64 Bits
*/

//          الحل 
#include <iostream> 
using namespace std ; 
int main ()
{
double salary = 5000.98;

cout << "size of salary in byetes is  " << sizeof (salary) <<" byetes" <<endl ;
cout << "size of salary in bits is  " << sizeof (salary) * 8 << " bits " <<endl ;

return 0;
}