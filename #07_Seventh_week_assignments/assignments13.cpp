//  التكليف الثالث عشر في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
// Output Needed
30
27
24
21
18
15
12
9
6
3

// Without Even Numbers
27
21
15
9
3
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 30; i >= 3;)
    {
        cout << i << endl;
        i = i - 3;
    }
    cout << "=================\n";
    for (int i = 30; i >= 3; i = i - 3)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }

        // if (i%2 == 0 )
        // {
        //     continue ;
        //     cout << i << endl;
        // }
    }

    return 0;
}