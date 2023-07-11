//  التكليف الرابع عشر في الأسبوع السابع من كورس 
// Fundamentals Of Programming With C++

/*
لديك متغير num قيمته رقم 2 لا تقم بالتعديل عليه ولا على الشرط الموجود داخل ال While
يجب عليك كتابة ال Code داخل ال Loop لتطبع الأرقام بنفس ال Pattern المطلوب

int num = 2;
while (num < 520) {
  // Your Code Here
}

// Needed Output
1
4
10
22
46
94
190
382
*/

#include <iostream>
using namespace std;

int main()
{
    int num = 2;
    while (num < 520)
    {
        if (num == 2)
        {
            num--;
        }
        cout << num << endl;
        num += num + 2;
        if (num > 382)
        {
            break;
        }
    }

    return 0;
}