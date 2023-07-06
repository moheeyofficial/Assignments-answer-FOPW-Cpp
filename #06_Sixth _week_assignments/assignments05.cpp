//  التكليف الخامس في الأسبوع السادس من كورس
// Fundamentals Of Programming With C++

/*
لدينا Array وسوف تتغير العناصر الخاصة بها
نريد أن نعرف إذا كانت ال Array متناظرة أم لا "Palindrome"
معنى متناظرة هنا أي أن العنصر الأول مثل الأخير والثاني مثل قبل الأخير وهكذا
مستقبلا ستجد طرق سهلة لعمل هذا الطلب ولكن حاليا يمكنك عمله بواسطة ما تعلمته في ال Conditions
لذلك الحل المطلوب نحتاج أن يعمل على ال 3 أمثلة الموجودين فقط حاليا
*/

/*
// Example 1
int vals[] = {100, 200, 600, 200, 100};

// Output
"Array Is Palindrome"

// Example 2
int vals[] = {100, 200, 200, 100};

// Output
"Array Is Palindrome"

// Example 3
int vals[] = {100, 300, 600, 200, 100};

// Output
"Array Is Not Palindrome"
*/

#include <iostream>
using namespace std;

int main()
{
    // Example 1
    int vals[] = {100, 200, 600, 200, 100};
    cout << (vals[0] == vals[4] && vals[1] == vals[3]
                 ? "Array Is Palindrome\n"
                 : "Array Is Not Palindrome\n");
    // // Output
    // "Array Is Palindrome"

    // // Example 2
    int vals2[] = {100, 200, 200, 100};
    cout << (vals2[0] == vals2[3] && vals2[1] == vals2[2]
                 ? "Array Is Palindrome\n"
                 : "Array Is Not Palindrome\n");

    // // Output
    // "Array Is Palindrome"

    // // Example 3
    int vals3[] = {100, 300, 600, 200, 100};
    cout << (vals3[0] == vals3[4] && vals3[1] == vals3[3]
                 ? "Array Is Palindrome\n"
                 : "Array Is Not Palindrome\n");

    // // Output
    // "Array Is Not Palindrome"

    return 0;
}