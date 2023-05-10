//  التكليف الأول في الأسبوع الرابع من كورس 
// Fundamentals Of Programming With C++

/*
إستبدل علامة الإستفهام بواحد من ال Arithmetic Operators
 لتخرج بالنتيجة المطلوبة في حميع الأسطر

 غير مسموح بالتعديل على الأرقام

 غير مسموح بتكرار نفس الحل
*/

/*
int num = 3;
cout << num ? num << "\n";                 // 6
cout << num ? num ? num << "\n";           // 6
cout << (num ? num) ? num << "\n";         // 6
cout << (num ? num ? num) ? num << "\n";   // 6
cout << (num ? num) ? (num ? num) << "\n"; // 6
cout << (num ? num) ? (num ? num) << "\n"; // 6
cout << (num ? num) ? (num ? num) << "\n"; // 6
*/

//              الحل 

#include <iostream>
    using namespace std;

int main ()
{

int num = 3;
cout << "line1\t" <<num + num << "\n";                     // 6
cout << "line2\t" <<num * num - num << "\n";               // 6
cout << "line3\t" <<(--num * num) + num << "\n";           // 6
cout << "line4\t" <<(++num + num + num) - num << "\n";     // 6
cout <<"line5\t" << (num + num) - (num % num) << "\n";     // 6
cout <<"line6\t" << (num + num) + (num - num) << "\n";     // 6
cout << "line7\t" <<(num / num) * (num + num) << "\n";     // 6

/* السطرين اللي تحت منقولين من حل احد الناس */
    cout << (++num * num) - (++num + num)<< "\n"; // 6
    cout << (++num * num) % (--num + num) << "\n"; // 6 

    return 0;
}