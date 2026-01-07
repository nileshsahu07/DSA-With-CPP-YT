#include <iostream>
using namespace std;

//Topic :- Pass by value

// int sum(int a,int b){
//     a = a + 10;
//     b = b + 10;

//     cout<<a<<endl;
//     cout<<b<<endl;

//     return a+b;
// }

// int main(){

//     int a = 5;
//     int b = 4;

//     cout<<sum(a,b)<<endl;

//     cout<<a<<endl;
//     cout<<b<<endl;

//     return 0;
// }


//Question :- sum of digits


int sumOfDigits(int digits){
    int sum = 0;

    while(digits>0){
        int num = digits % 10;
        digits = digits / 10;
        sum = sum + num;
    }

    return sum;
}

int main(){

    int digits = 2356;

    cout<<sumOfDigits(digits)<<endl;

    return 0;
}