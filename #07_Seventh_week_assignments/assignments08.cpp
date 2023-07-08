//  التكليف الثامن في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
قم بعمل Loop لنطبع القيم المطلوبة في المثال بالأسفل
قم بعمل المطلوب مرة بإستخدام For ومرة بإستخدام While

// Output Needed
2
6
14
30
62
126
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 2;
    int add = 2;
    for (;;)
    {
        cout << i << endl;
        i = i * add + add;
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
        if (num > 5)
        {
            break;
        }
        cout << index << endl;
        num++;
        index = index * add + add;
    }

    return 0;
}