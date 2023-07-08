//  التكليف السادس في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
قم بعمل Loop لنطبع القيم المطلوبة في المثال بالأسفل
قم بعمل المطلوب مرة بإستخدام For ومرة بإستخدام While

// Output Needed
10
100
10000
100000000
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    for (;;)
    {
        cout << i << endl;
        i *= i;
        if (i > 100000000)
        {
            break;
        }
    }
    cout << "================\n";
    int index = 10;
    int num = 0;
    while (true)
    {
        if (num > 3)
        {
            break;
        }
        cout << index << endl;
        num++;
        index *= index;
    }

    return 0;
}