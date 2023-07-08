//  التكليف التاسع في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
قم بعمل Loop لنطبع القيم المطلوبة في المثال بالأسفل
قم بعمل المطلوب مرة بإستخدام For ومرة بإستخدام While

// Friends Array
 string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

// Output Needed
"Mohamed"
"Sayed"
*/

#include <iostream>
using namespace std;

int main()
{
    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
    int i = 1;
    for (;;)
    {
        cout << friends[i] << endl;
        i++;
        if (i > 2)
        {
            break;
        }
    }
    cout << "================\n";
    int index = 1;
    int num = 0;
    while (true)
    {
        if (num > 1)
        {
            break;
        }
        cout << friends[index] << endl;
        num++;
        index++;
    }

    return 0;
}