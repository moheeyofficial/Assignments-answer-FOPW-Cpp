//  التكليف الثاني في الأسبوع السادس من كورس
// Fundamentals Of Programming With C++
/*
    لديك متغير بإسم Check يحتوي على رقم 25 سنستعمله لمقارنة الأرقام
لديك Array فيها مجموعة من الأرقام. أول 3 أرقام يمكن أن يتغيروا
نريد أن نفحص إذا كان أول رقم أكبر من 25 قيمة متغير Check نقوم بجمع أول رقم مع الرقم قبل الأخير
إذا كان ثاني رقم أكبر من 25 قيمة متغير Check نقوم بجمع ثاني رقم مع الرقم قبل الأخير
إذا كان ثالث رقم أكبر من 25 قيمة متغير Check نقوم بجمع ثالث رقم مع الرقم قبل الأخير
إذا كان هناك أكثر من رقم من الأرقام الثلاثة الأولى أكبر من 25 يجب أن نمشي بالترتيب
يجب إستخدام القيم الموجودة في عناصر ال Array لنطبع الرسالة كما في المثال
يجب تقسيم الرسالة على 3 أسطر وكل سطر تستعمل فيه cout
*/

/*
// Example 1
int check = 25;
int nums[]{40, 20, 30, 70, 100};

// Ouput
"{40} + {70} = 110"

// Example 2
int check = 25;
int nums[]{20, 35, 30, 70, 100};

// Ouput
"{35} + {70} = 105"

// Example 2
int check = 25;
int nums[]{20, 25, 30, 70, 100};

// Ouput
"{30} + {70} = 100"
*/

#include <iostream>
using namespace std;

int main()
{
    // Example 1
    // Ouput
    // "{40} + {70} = 110"
    int check = 25;
    int nums[]{40, 20, 30, 70, 100};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    if (nums[0] > check)
    {
        cout << "{" << nums[0] << "}"
             << " + "
             << "{" << nums[numsSize - 2] << "}"
             << " = "
             << nums[0] + nums[numsSize - 2];
    }

    // Example 2
    // Ouput
    // "{35} + {70} = 105"
    int check2 = 25;
    int nums2[]{20, 35, 30, 70, 100};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);

    if (nums2[1] > check2)
    {
        cout << "\n"
             << "{" << nums2[1] << "}"
             << " + "
             << "{" << nums2[numsSize - 2] << "}"
             << " = "
             << nums2[1] + nums2[numsSize2 - 2];
    }

    // // Example 3
    // // Ouput
    // "{30} + {70} = 100"
    int check3 = 25;
    int nums3[]{20, 25, 30, 70, 100};
    int numsSize3 = sizeof(nums3) / sizeof(nums3[0]);

    if (nums2[1] > check2)
    {
        cout << "\n"
             << "{" << nums3[2] << "}"
             << " + "
             << "{" << nums3[numsSize - 2] << "}"
             << " = "
             << nums2[2] + nums2[numsSize2 - 2];
    }

    return 0;
}