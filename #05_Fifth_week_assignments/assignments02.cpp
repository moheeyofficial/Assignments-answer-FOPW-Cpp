//  التكليف الثاني في الأسبوع الخامس من كورس 
// Fundamentals Of Programming With C++

/*
لديك المتغيرات التالية الخاصة بالعمر والنقاط والتقييم
نريد عمل مجموعة من الشروط كالتالي
في حالة السن أكبر من 18 نقوم بكتابة “Yes Age Is Ok”
في حالة السن ليس أكبر من 18 نقوم بكتابة “No Age Is Not Ok”
في حالة النقاط أكبر من 500 نقوم بكتابة “Yes Points Is Ok”
في حالة النقاط ليست أكبر من 500 نقوم بكتابة “No Points Is Not Ok”
*/

/*
// Test Case 1
int age = 18;
int points = 450;

// Output
"No Age Is Not Ok"
"No Points Is Not Ok"

// Test Case 2
int age = 20;
int points = 450;

// Output
"Yes Age Is Ok"
"No Points Is Not Ok"

// Test Case 3
int age = 20;
int points = 650;

// Output
"Yes Age Is Ok"
"Yes Points Is Ok"
*/

//      الحل 

#include <iostream>
    using namespace std;

int main ()
{
// Test Case 1
int age = 18;
int points = 450;
    cout << (age > 18 ? "Yes Age Is Ok" : "No Age Is Not Ok" ) << endl;
    cout << (points > 500 ? "Yes Points Is Ok" : "No Points Is Not Ok" )<< endl ;

// // Output
// "No Age Is Not Ok"
// "No Points Is Not Ok"

// // Test Case 2
// int age = 20;
// int points = 450;
//     cout << (age > 18 ? "Yes Age Is Ok" : "No Age Is Not Ok" ) <<endl;
//     cout << (points > 500 ? "Yes Points Is Ok" : "No Points Is Not Ok" ) ;

// // Output
// "Yes Age Is Ok"
// "No Points Is Not Ok"

// // Test Case 3
// int age = 20;
// int points = 650;
//     cout << (age > 18 ? "Yes Age Is Ok" : "No Age Is Not Ok" ) << endl ;
//     cout << (points > 500 ? "Yes Points Is Ok" : "No Points Is Not Ok" ) ;

// // Output
// "Yes Age Is Ok"
// "Yes Points Is Ok"


    return 0;
}