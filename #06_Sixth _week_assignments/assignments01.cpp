//  التكليف الأول في الأسبوع السادس من كورس
// Fundamentals Of Programming With C++
/*
    لديك إثنين Arrays واحدة فيها ارقام وواحدة فيها قيم الجوائز
    المطلوب طباعة الرسائل الأربعة الموجودة في المثال بالأسفل
    ممنوع كتابة القيم بنفسك ويجب قرائتها من عناصر ال Array
*/

/*
int nums[]{100, 300, 600, 900};
string awards[]{"iPhone", "iPad", "PC", "Car"};

// Output Needed
"Number 100 Award Is: iPhone"
"Number 300 Award Is: iPad"
"Number 600 Award Is: PC"
"Number 900 Award Is: Car"
*/

#include <iostream>
using namespace std;

int main()
{
    int nums[]{100, 300, 600, 900};
    string awards[]{"iPhone", "iPad", "PC", "Car"};
    cout << "number " << nums[0] << " AWard is: " << awards[0] << "\n";
    cout << "number " << nums[1] << " AWard is: " << awards[1] << "\n";
    cout << "number " << nums[2] << " AWard is: " << awards[2] << "\n";
    cout << "number " << nums[3] << " AWard is: " << awards[3] << "\n";

    cout << "\n======== anther answer ========\n";

    for (int i = 0; i < 4; i++)
    {
        if (i == 0)
        {
            cout << "\n";
        }
        cout << "number " << nums[i] << " AWard is: " << awards[i] << "\n";
    }

    return 0;
}