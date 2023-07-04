//  التكليف العاشر في الأسبوع السادس من كورس 
// Fundamentals Of Programming With C++

/*
لدينا Array كما في المثال ونحتاج أن نطبع قيمة أول عنصر في سطر وآخر عنصر في سطر تحته
نحتاج أن نقوم بعمل المطلوب بثلاث طرق مختلفة وتخرج النتيجة كما في المثال بالأسفل
ال Index الخاص بآخر عنصر يجب أن يتم جلبه بطريقة Dynamic أي لا تكتب الرقم بيدك
*/

/*
#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 6> nums = {10, 20, 30, 40, 20, 50};

  // Method 1
  "First: 10"
  "Last: 50"

  // Method 2
  "First: 10"
  "Last: 50"

  // Method 3
  "First: 10"
  "Last: 50"

  return 0;
}
*/

#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 6> nums = {10, 20, 30, 40, 20, 50};
   
  // Method 1
    cout << nums.front()<<endl;
    cout << nums.back()<<endl;

//   "First: 10"
//   "Last: 50"

//   // Method 2
    cout << nums[nums.size ()-nums.size ()]<<endl;
    cout << nums[nums.size ()-1]<<endl;

//   "First: 10"s
//   "Last: 50"

//   // Method 3
    cout << nums[sizeof(nums)/sizeof(nums[0]) -1 ]<<endl;
    cout << nums[sizeof(nums)/sizeof(nums[0])- sizeof(nums)/sizeof(nums[0]) ]<<endl;
//   "First: 10"
//   "Last: 50"

  return 0;
}