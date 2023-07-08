//  التكليف الثاني عشر في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
لدينا Array فيها مجموعة من الأرقام
قم بإستخدام ال Loop لفحص كل رقم في ال Iterations
إذا كان الرقم الحالي + نفسه يساوي الرقم الذي بعده قم بطباعته اما غير ذلك لا تطبعه

int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};

// Output Needed
10
14
40
15
*/

#include <iostream>
using namespace std;
int main()
{
    int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};
    int numsSize = size(nums);
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] + nums[i] == nums[i + 1])
        {
            cout << nums[i] << endl;
        }
    }
}