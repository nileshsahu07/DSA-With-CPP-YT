#include <iostream>
using namespace std;

// int main(){
//     cout<<"Hello DSA";
//     return 0;
// }

// Topic :- Type Casting =>

//Implicit
// int main(){
//     char grade = 'A';

//     int value = grade;

//     cout<<value<<"\n";  // 65 if small a then output will be 97
//     return 0;
// }


//explicit
// int main(){
//     double price = 100.99;

//     int value = (int)price;

//     cout<<value<<"\n";  // 100 
//     return 0;
// }


//Topic :- Input in Cpp =>

// int main(){
//     int age;

//     cout<<"Enter your age:- ";
    
//     cin>>age;

//     cout<<"Your age is:- "<<age;

//     return 0;
// }


//Topic:- Operators =>

// int main(){
//     int a = 5;
//     int b = 2;

//     cout<<a/b<<endl; // 2

//     int c = 5;
//     float d = 2;
 
//     cout<<c/d<<endl; //2.5

//     cout<<a/(double)b<<endl; //2.5 this is type casting

//     int ans = a/(double)b;

//     cout<<ans<<endl; //2 because double to int converted;

//     return 0;
// }


//Topic :- Unary Operators :- 

// int main(){

//     int a = 10;

//     int b = a++; // work , update

//     cout<<"b :- "<<b<<endl; // 10
//     cout<<"a :- "<<a<<endl; // 11

//     cout<<endl;

//     int c = 10;

//     int d = ++c; // update , work

//     cout<<"d :- "<<d<<endl; // 11
//     cout<<"c :- "<<c<<endl; // 11

//     return 0;
// }

// int main(){

//     int a = 10;

//     int b = a--; // work , update

//     cout<<"b :- "<<b<<endl; // 10
//     cout<<"a :- "<<a<<endl; // 9

//     cout<<endl;

//     int c = 10;

//     int d = --c; // update , work

//     cout<<"d :- "<<d<<endl; // 9
//     cout<<"c :- "<<c<<endl; // 9

//     return 0;
// }


//Practice Work :- Calculator making =>

int main() {
    int a, b;
    char c;  

    cout << "Select operator (+, -, *, /): ";
    cin >> c;

    cout << "Enter first value: ";
    cin >> a;

    cout << "Enter second value: ";
    cin >> b;

    if (c == '+') {
        cout << "Ans is: " << a + b << endl;
    }
    else if (c == '-') {
        cout << "Ans is: " << a - b << endl;
    }
    else if (c == '*') {
        cout << "Ans is: " << a * b << endl;
    }
    else if (c == '/') {
        if (b == 0) {
            cout << "Division by zero not allowed!" << endl;
        } else {
            cout << "Ans is: " << (float)a / b << endl;
        }
    }
    else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
