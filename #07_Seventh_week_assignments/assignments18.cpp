//  التكليف الثامن عشر في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
لديك كود ال Loop التالي لا تقم بالتعديل على سطر ال For
قم بتعديل ال Code الموجود داخل ال Body الخاص بال Loop ليظهر ال Output كما هو مطلوب في المثال

for (int i = 0; i <= 1000; i += 100) // Do Not Edit This Line
{
  // Edit What You Need And Add Your Code
  cout << i << "\n";
}

// Output Needed
100
200
300
400
600
700
800
900
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 1000; i += 100)
    {
        if (i == 0)
        {
            i += 100;
        }
        if (i > 900)
        {
            break;
        }

        cout << i << "\n";
    }

    return 0;
}