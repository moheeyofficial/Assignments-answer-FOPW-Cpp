//  التكليف العاشر في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
لدينا Array فيها أسماء الأصدقاء ونريد إستخدام ال Loop
لطباعة الأسماء التي تبدا بحرف A كبير فقط
قم بعمل المطلوب مرة بإستخدام For ومرة بإستخدام While

// Friends Array
string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};

// Output Needed
"Ahmed"
"Ashraf"
"Amany"
*/

#include <iostream>
using namespace std;

int main()
{
    string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
    for (int i = 0; i < 5; i++)
    {
        if (friends[i][0] == 'A')
        {
            cout << friends[i] << endl;
        }
    }
    cout << "===================\n";
    int i = 0;
    int friendsCount = size(friends);
    while (i < 5)
    {
        if (friends[i][0] == 'A')
        {
            cout << friends[i] << endl;
        }
        i++;
    }

    return 0;
}