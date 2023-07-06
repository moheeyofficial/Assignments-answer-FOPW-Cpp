//  التكليف الثامن في الأسبوع السادس من كورس
// Fundamentals Of Programming With C++

/*
لديك ال Code التالي والذي يطبع عناصر ال Array كلها بعد ملأ القيم برقم 100
ممنوع التعديل على ال Code في الأسفل
مطلوب إنشاء ال Array بالطريقة المناسبة حتى تعمل ال Method المسماه Fill
*/

/*
#include <array>
#include <iostream>
using namespace std;

int main()
{
  // Your Code Here

  // Do Not Edit
  nums.fill(100);
  cout << nums[0] << "\n"; // 100
  cout << nums[1] << "\n"; // 100
  cout << nums[2] << "\n"; // 100

  return 0;
}
*/

#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 3> nums;
  // Do Not Edit
  nums.fill(100);
  cout << nums[0] << "\n"; // 100
  cout << nums[1] << "\n"; // 100
  cout << nums[2] << "\n"; // 100

  return 0;
}