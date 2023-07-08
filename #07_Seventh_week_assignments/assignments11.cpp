//  التكليف الحادي عشر في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
لدينا Array فيها أسماء الأصدقاء ونريد إستخدام ال Loop لنخرج بالمطلوب في المثال التالي
عناصر ال Array يمكن أن تتغير لذلك كل شيء يجب طباعته بشكل برمجي


// Friends Array
string friends[] = {"Ahmed", "Osama", "Ameer"};

// Output Needed
=========
= Ahmed =
==================
== A, h, m, e, d =
==================

=========
= Osama =
==================
== O, s, a, m, a =
==================

=========
= Ameer =
==================
== A, m, e, e, r =
==================
*/

#include <iostream>
using namespace std;

int main()
{
    string friends[] = {"Ahmed", "Osama", "Ameer"};
    int fcount = size(friends);
    int i = 0;
    for (; i < fcount; i++)
    {
        cout << "\n=======================\n";
        cout << "======  " << friends[i] << "  ========\n";
        cout << "=======================\n";
        for (int index = 0; index < 5; index++)
        {
            cout << friends[i][index];
            if (index < 4)
            {
                cout << ",   ";
            }
        }
        cout << "\n=======================\n";
    }

    return 0;
}