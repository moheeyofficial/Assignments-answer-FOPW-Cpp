//  التكليف الخامس في الأسبوع الخامس من كورس 
// Fundamentals Of Programming With C++

/*
لديك الشرط التالي يعمل بدون أي مشكلة
المطلوب عمل نفس الشرط بواسطة ال Ternary Operator
*/ 
/*
int by = 82; // by => Birth Year
int s = 500; // s => Salary
if (by > 80)
{
  if (s < 600)
    cout << "Ok\n";
  else
    cout << "High\n";
}
else
{
  cout << "Not Ok\n";
}
*/

//          الحل 
#include <iostream>
    using namespace std ;
    int main ()
    {


        int by = 82; // by => Birth Year
        int s = 500; // s => Salary

        cout << (by > 80 ? (s <600 ? "Ok\n" : "High\n" )  :  "Not Ok\n"   );

        return 0;
    }