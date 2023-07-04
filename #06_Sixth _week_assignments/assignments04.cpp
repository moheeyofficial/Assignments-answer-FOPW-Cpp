//  التكليف الرابع في الأسبوع السادس من كورس 
// Fundamentals Of Programming With C++
/*
    لديك Array فيها مجموعة من الأرقام
عناصر ال Array يمكن أن تتغير وسوف نضع ثلاث أمثلة لتجربة ال Code
قم بفحص إذا كان حاصل جمع الرقم الأول والأخير أكبر من الرقم الأوسط قم بطباعة الرسالة كما في المثال
إذا لم يتحقق الشرط السابق قم بفحص إذا كان حاصل جمع الرقم الثاني والرقم قبل الأخير أكبر من الرقم الأوسط قم بطبع الرسالة كما في المثال
إذا لم تتحقق الشروط السابقة قم بطباعة الرقم الأوسط
*/

/*
// Example 1
int vals[]{100, 200, 250, 400, 200};

// Needed Output
"First Number + Last Number Is Larger Than Middle Number"
"100 + 200 = 300"
"300 > 250"

// Example 2
int vals[]{100, 200, 500, 400, 200};

// Needed Output
"Second Number + Before Last Number Is Larger Than Middle Number"
"200 + 400 = 600"
"600 > 500"

// Example 3
int vals[]{100, 200, 600, 400, 200};

// Needed Output
"Middle Number Is The Largest"
"600"
*/

#include <iostream>
    using namespace std;

int main ()
{
int vals[]{100, 200, 250, 400, 200};
    if (vals[0]+ vals[4]>vals[2])
    {
        cout << "First Number + Last Number Is Larger Than Middle Number";
    }
    else if (vals[1]+ vals[3]>vals[2])
    {
        cout << "Second Number + Before Last Number Is Larger Than Middle Number";
    }
    else
    cout << "Middle Number Is The Largest";

    return 0;
}