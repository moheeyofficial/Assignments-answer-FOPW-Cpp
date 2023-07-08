//  التكليف الثالث في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
قم بعمل برنامج يقبل من المستخدمين رقمين
سنقوم بعمل Loop لطباعة Range من الأرقام بدايته ونهايته هي الأرقام التي كتبها المستخدم
بداية ال Range ونهايته لا تطبعها فمثلا لو الرقم الأول 1 والثاني 5 تقوم بطباعة 2, 3, 4
إذا كان الرقم الأول أكبر من الثاني قم بعكس الأرقام
لو كتب الشخص الرقم الأول 5 والثاني 1 نقوم بعكس الأرقام ونجعل ال Range يبدأ من 1 إلى 5
لا تقم بطباعة الأرقام الزوجية من ضمن ال Range
شاهد الأمثلة لتفهم الفكرة
*/
/*
  Test Case 1
  Number One: 1
  Number Two: 9
  Output: 3, 5, 7

  Test Case 2
  Number One: 2
  Number Two: 15
  Output: 3, 5, 7, 9, 11, 13

  Test Case 3
  Number One: 8
  Number Two: 2
  Output: 3, 5, 7
*/

#include <iostream>
using namespace std;

int main()
{
    int fNum, i, sNum, /*swap1 , swap2 ,*/ swich;
    cout << "enter the first nmber  ";
    cin >> fNum;
    cout << "enter the second number  ";
    cin >> sNum;
    if (sNum < fNum)
    {
        // swap1 = fNum ;
        // swap2 = sNum ;
        // fNum = swap2 ;
        // sNum = swap1 ;
        swich = fNum;
        fNum = sNum;
        sNum = swich;
    }
    i = fNum;
    for (;;)
    {
        i++;
        if (i > sNum - 1)
        {
            break;
        }
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i;
        if (i < sNum - 2)
        {
            cout << ",  ";
        }
    }
    return 0;
}
