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


// int sumOfDigits(int digits){
//     int sum = 0;

//     while(digits>0){
//         int num = digits % 10;
//         digits = digits / 10;
//         sum = sum + num;
//     }

//     return sum;
// }

// int main(){

//     int digits = 2356;

//     cout<<sumOfDigits(digits)<<endl;

//     return 0;
// }


//number is prime or not  with function 

// bool isPrime(int n){
//     bool numPrime = true;

//     for(int i = 2; i<n; i++){
//         if(n%i == 0){
//             numPrime = false;
//             break;
//         }
//     }

//     return numPrime;
// }

// int main(){

//     int n = 8;

//     if(isPrime(n)){
//         cout<<n<<" is a Prime number!\n";
//     }else{
//         cout<<n<<" is an Odd number!\n";
//     }

//     return 0;
// }



//Print all prime numbers 2 to n

// void primeNums(int n){

//     for(int i = 2; i<n; i++){
//         bool isPrime = true;
        
//         for(int j=2; j<i; j++){
//             if(i%j == 0){
//                 isPrime = false;
//                 break;
//             }
//         }

//         if(isPrime){
//             cout<<i<<" ";
//         }   
//     }

//     return;
// }

// int main(){

//     int n = 20;

//     primeNums(n);

//     return 0;
// }


//print nth fibonacci number

int fibonacciNum(int n){
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }

    int a = 0, b = 1, c;

    for(int i=2; i<=n; i++){
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main(){
    int n = 7;

    cout<<fibonacciNum(n)<<endl;

    return 0;
}