//  التكليف الرابع في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
قم بعمل Loop لنطبع القيم المطلوبة في المثال بالأسفل
قم بعمل المطلوب مرة بإستخدام For ومرة بإستخدام While

// Output Needed
0
2
4
6
8
14
16
18
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 19; i += 2)
    {
        cout << i << endl;
    }

    cout << "================\n";

    int index = 0;
    while (index < 19)
    {
        cout << index << endl;
        index += 2;
    }

    return 0;
}