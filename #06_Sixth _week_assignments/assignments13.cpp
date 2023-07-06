//  التكليف الثالث عشر في الأسبوع السادس من كورس
// Fundamentals Of Programming With C++

/*لديك مجموعة من المتغيرات تحتوي على أسماء
نريد طباعة الأسماء بجانب بعضها كما في المثال بثلاث طرق مختلفة*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string fName = "Elzero ";
    string mName = "Web ";
    string lName = "School";

    cout << fName + mName + lName << endl;
    cout << fName << mName << lName << endl;
    cout << fName.append(mName.append(lName)) << endl;

    // Output Needed
    // Elzero Web School
    // Elzero Web School
    // Elzero Web School

    return 0;
}