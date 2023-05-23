//  التكليف الثامن  في الأسبوع الخامس من كورس 
// switch تكليفات 
// Fundamentals Of Programming With C++

/*
قم بإستعمال ال Switch لإظهار رسالة تعبر عن حدث معين حصل في سنة من السنين
السنين والرسالة التي تظهر ستجدها في التعليقات في الأسفل
السنة عبارة عن مدخل من المستخدم وهي متغير بإسم year
إذا كتب المستخدم سنة غير الموجودين تظهر رسالة “No Events in This Year”
*/

/*
  1982 => "My Birth Day"
  1989 => "My First Work"
  1995 => "Windows 95"
  2000 => "Windows Millennium"
  2002 => "Created My vBulletin Forum"
  Any Other Year => "No Events in This Year"
*/

//          الحل 

#include <iostream>
    using namespace std;

int main ()
{
    short year ;
    cout << "enter the year " ;
    cin >> year ;
        switch (year)
        {
            case 1982 :
                cout << "My Birth Day" ;
                break;
            case 1989 :
                cout << "My First Work" ;
                break;
            case 1995 :
                cout << "Windows 95" ;
                break;
            case 2000 :
                cout << "Windows Millennium" ;
                break;
            case 2002 :
                cout << "Created My vBulletin Forum" ;
                break;
            default :
                cout << "No Events in This Year" ;
                break;

        }

    return 0;
}
