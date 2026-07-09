#include <iostream>
using namespace std;

void printDigits(int n){ // time complexity is O(log10n) due to we divide it to 10 :-  n = n/10;
    while( n != 0){
        int digit = n % 10;
        cout<<digit<<endl;
        n = n/10;
    }
}

int SumDigits(int n){
    int sum = 0;
    while( n != 0){
        int digit = n % 10;
        sum += digit;
        n = n/10;
    }
    return sum;
}

//digits in a number
// int main(){

//     int n = 2586;

//     printDigits(n);

//     cout<<SumDigits(n)<<endl;

//     cout<< (int)(log10(n) + 1)<<endl;// it will give count of digits of our number n

//     return 0;
// }

// bool isArmstrongNumber(int n){
//     int copy = n;
//     int sum = 0;

//     while(n != 0){
//         int dig = n % 10;
//         sum += (dig*dig*dig);
//         n = n / 10;
//     }

//     if(sum == copy){
//         return true;
//     }else{
//         return false;
//     }
// }


// int main(){
//     int n = 153;

//     cout<<isArmstrongNumber(n)<<endl;

//     return 0;
// }


int gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b;
        }else{
            b = b % a;
        }
    }

    if(a == 0) return b;
    return a;
}
int gcdRec(int a, int b){
    if(b==0) return a;

    return gcdRec(b,a%b);
}

int lcm(int a, int b){
    int gcd = gcdRec(a, b);
    return (a * b)/gcd;
}


int main(){
    cout<<gcd(20,28)<<endl;
    cout<<gcdRec(20,28)<<endl;
    cout<<lcm(20,28)<<endl;
    return 0;
}



