//  التكليف الأول في الأسبوع السابع من كورس 
// Fundamentals Of Programming With C++

/*
لديك Array تحتوي على اسماء الأصدقاء
نريد إستخدام ال Loop لنطبع فقط الأسماء التي تتكون من 5 حروف

string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
// Output Needed
"Osama"
"Ahmed"
"Hagar"
"Salwa"

*/

#include <iostream>
    using namespace std;

int main ()
{
    string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
    int namesCount = size(names);
    for (int i = 0 ; i < namesCount ; i ++)
    {
        // int num = size(names [i])-1;
        if ( size(names [i]) == 5)
        {
            cout << names [i] << endl ;
        }
    }
    // Output Needed
    // "Osama"
    // "Ahmed"
    // "Hagar"
    // "Salwa"



    return 0;
}