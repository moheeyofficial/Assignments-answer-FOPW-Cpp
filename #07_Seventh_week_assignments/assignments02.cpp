//  التكليف الثاني في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
لديك ال Code الخاص بال Loop قم بالتعديل عليه كما تريد ماعدا سطر ال For
المطلوب طباعة الأرقام من 2 إلى 8
*/

// Output
// 2
// 3
// 4
// 5
// 6
// 7
// 8

#include <iostream>
using namespace std;
int main()
{
    int index = 2;
    for (;;) // <= Do Not Edit This Line
    {
        cout << index << "\n"; // From 2 To 10
        index++;
        if (index > 8)
        {
            break;
        }
    }

    return 0;
}
