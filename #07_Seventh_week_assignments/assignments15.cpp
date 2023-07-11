//  التكليف الخامس عشر  في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
لديك مجموعة من المتغيرات التي تساعدك في عمل المطلوب
المطلوب طباعة الارقام بالترتيب المطلوب بإستخدام ال Loop
بعد كل رقم تقوم بجمع هذا الرقم مع الرقم الموازي له من الجهة الأخرى
بمعنى أول رقم مع آخر رقم وثاني رقم مع الرقم قبل الأخير وثالث رقم مع ثالث رقم ورابع رقم مع ثاني رقم وآخر رقم مع أول رقم
ممنوع إستعمال أي أرقام نهائيا ولديك متغير يساعدك في عمل المطلوب
شاهد المثال لتعرف المطلوب


int help_num = 4;
int nums[] = {2, 4, 5, 6, 10};

// Output Needed
"2 + 10 = 12"
"4 + 6 = 10"
"5 + 5 = 10"
"6 + 4 = 10"
"10 + 2 = 12"

*/

#include <iostream>
using namespace std;

int main()
{
    int help_num = 4;
    int nums[] = {2, 4, 5, 6, 10};

    for (int i = 0, x = 4; i < 5;)
    {
        cout << nums[i] << " + " << nums[x] << " = " << nums[i] + nums[x] << endl;
        i++;
        x--;
    }

    return 0;
}