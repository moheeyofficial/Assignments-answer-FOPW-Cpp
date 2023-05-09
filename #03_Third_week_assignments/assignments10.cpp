//  التكليف العاشر  في الأسبوع الثالث من كورس
// Fundamentals Of Programming With C++

/*
لدينا إسم مستعار لل Type ونوعه long long int
نريد أن نقوم بإنشاء الإسم المستعار بطريقتين
إذا أردت بعض التحديات هناك طريقة ثالثة يمكنك البحث عنها 🙂
*/

/*
// Add Type Alias Here

// Do Not Edit
lli num = 150050005; // This Is Long Long Int
cout << num << "\n"; // 150050005
*/

//      الحل

#include <iostream>
using namespace std;

int main()
{
    // Add Type Alias Here
    using lli = long long int; // الطريقة الاولي 
    typedef long long lli; // الطريقة الثانية 

    // Do Not Edit
    lli num = 150050005; // This Is Long Long Int
    cout << num << "\n"; // 150050005
}