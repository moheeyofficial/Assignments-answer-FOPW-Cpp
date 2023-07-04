//  التكليف التاسع في الأسبوع السادس من كورس 
// Fundamentals Of Programming With C++

/*
لدينا Array كما في المثال ونحتاج أن تجلب عدد عناصر ال Array بأكثر من طريقة
إستخدم المساعدة بالأسفل لتبحث وتصل للحل
*/
/*
int nums[] = {10, 20, 30, 40, 20, 50};

// Method 1
6

// Method 2
6

// Method 3
6
*/

#include <iostream>
    using namespace std;

int main ()
{
    int nums[] = {10, 20, 30, 40, 20, 50};

    // Method 1
    cout << sizeof(nums)/sizeof(nums[0]) <<endl;
    //6
    // Method 2
    //حل ابراهيم صلاح 
    cout << end(nums)-begin(nums)<<endl;
    //6
    // Method 3
    //حل ابراهيم صلاح 
    cout << nums.size() << endl;
    // 6


    return 0;
}