//  التكليف الأول في الأسبوع السابع من كورس
// Fundamentals Of Programming With C++

/*
قم بعمل Loop يطبع الأرقام من صفر حتى 10
المطلوب عمل ال Loop بواسطة For, While, Do While
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }

    cout << "=============================\n";
    int wh = 0;
    while (wh <= 10)
    {
        cout << wh << endl;
        wh++;
    }

    cout << "=============================\n";
    int Do = 0;
    do
    {
        cout << Do << endl;
        Do++;
    } while (Do <= 10);

    return 0;
}