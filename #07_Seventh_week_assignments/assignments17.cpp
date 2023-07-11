//  التكليف السابع عشر في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
قم بعمل Loop لنطبع القيم المطلوبة في المثال بالأسفل
لاحظ الأرقام تحت ال 10 قبلها صفرين والأرقام تحت العشرين قبلها صفر واحد

// Output Needed
001
002
003
004
005
006
007
008
009
010
011
012
013
014
015
016
017
018
019
020
100
101
102
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 105; i++)
    {
        if (i <= 20 || i >= 100)
        {

            if (i < 10)
            {
                cout << "00" << i << endl;
            }

            else if (i >= 10 && i < 100)
            {
                cout << "0" << i << endl;
            }
            else
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}
