//  التكليف الخامس في الأسبوع السابع من كورس 
// Fundamentals Of Programming With C++

/*
قم بعمل Loop لنطبع القيم المطلوبة في المثال بالأسفل
قم بعمل المطلوب مرة بإستخدام For ومرة بإستخدام While

// Output Needed
0
3
6
9
12
15
18
21
24
27
*/


#include <iostream> 
using namespace std ;

int main ()
{
    for (int i = 0 ; i < 28 ; i+=3)
    {
        cout << i << endl ;
    }
    cout << "================\n";
    int index = 0;
    while (index < 28 )
    {
        cout << index << endl ;
        index +=3;
    }

    return 0;
}