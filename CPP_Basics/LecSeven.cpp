#include <iostream>
using namespace std;

//Bitwise Operator

// int main(){
//     int a = 4, b = 8;

//     cout<<(a & b)<<endl;
//     cout<<(a | b)<<endl;
//     cout<<(a ^ b)<<endl;

//     cout<<(10<<2)<<endl;
//     cout<<(10>>1)<<endl;

//     return 0;
// }


//write function to reverse an integer =>

// int reverse(int n){
//     int rev = 0;

//     while(n>0){
//         int digit = n % 10;
//         rev = rev * 10 + digit;
//         n /= 10;
//     }

//     return rev;
// }

// int main(){
//     int n = 125;

//     cout<<reverse(n)<<endl;

//     return 0;
// }


//how to find if a number is power of 2 without any loop =>

bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int n = 16;
    cout << isPowerOfTwo(n) << endl;  // 1 (true)
    return 0;
}