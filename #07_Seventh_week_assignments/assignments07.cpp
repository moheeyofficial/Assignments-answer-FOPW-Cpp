//  التكليف السابع في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
قم بعمل Loop لنطبع القيم المطلوبة في المثال بالأسفل
قم بعمل المطلوب مرة بإستخدام For ومرة بإستخدام While

// Output Needed
2
4
8
16
32
64
128
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 2;
    for (;;)
    {
        cout << i << endl;
        i += i;
        if (i > 128)
        {
            break;
        }
    }
    cout << "================\n";
    int index = 2;
    int num = 0;
    while (true)
    {
        if (num > 6)
        {
            break;
        }
        cout << index << endl;
        num++;
        index *= 2;
    }

    return 0;
}