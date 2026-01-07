#include  <iostream>
using namespace std;

//Topic :- Conditional Statements =>

// int main(){
//     char ch;

//     cout<<"Enter character:- ";
//     cin>>ch;

//     // if(ch >= 'a' && ch <= 'z'){
//     //     cout<<"Character is Lowercase\n";
//     // }else if(ch >= 'A' && ch <= 'Z'){
//     //     cout<<"Character is Upercase\n";
//     // }else{
//     //     cout<<"Invalid Charater\n";
//     // }

//     //yha implicit type conversion ho rha hai by compiler due to ASCII value
//     if(ch >= 97 && ch <= 122){
//         cout<<"Character is Lowercase\n";
//     }else if(ch >= 65 && ch <= 90){
//         cout<<"Character is Upercase\n";
//     }else{
//         cout<<"Invalid Charater\n";
//     }

//     return 0;
// }


//Topic :- Loops =>

//Question :- sum of 1 to n

// int main(){
//     //sum print
//     int n = 10;
//     int sum = 0;
//     for(int i = 1; i<=n; i++){
//         sum = sum + i; // or sum += i

//         // if(i==5){
//         //     break; //with this output is :-  15
//         // }
//     }
//     cout<<sum<<endl; // output :- 55
//     return 0;
// }


//Question :- sum of 1 to n of only odd numbers

// int main(){
//     //sum print
//     int n = 5;
//     int sum = 0;
//     for(int i = 1; i<=n; i++){
//         if(i%2 != 0){
//             sum += i; 
//         }
//     }
//     cout<<sum<<endl; // output :- 55
//     return 0;
// }


// difference between while and do while:-

// int main(){

//     while(3 > 5){
//         cout<<"Hello"; //dont print anything
//     }

//     do{
//         cout<<"Hyyy"; // print hyy
//     }while(3 > 5);

//     return 0;
// }


//Question :- check if a number prime or not

// int main(){
//     int n;
//     bool isPrime = true;

//     cout<<"Enter a number:- ";
//     cin>>n;

//     // for(int i = 2; i <= n-1; i++){ 
//     //     if(n % i == 0){
//     //         isPrime = false;
//     //         break;
//     //     }
//     // }

//     //optimized way with route n tak loop chalaker

//     for(int i = 2; i * i <= n; i++){ 
//         if(n % i == 0){
//             isPrime = false;
//             break;
//         }
//     }

//     if(isPrime){
//         cout<<n<<" :- is a prime number\n";
//     }else{
//         cout<<n<<" :- is not a prime number\n";
//     }

//     return 0;
// }


// Nested Loops :-

// int main (){

//     // box pattern
//     for(int i = 0; i < 5; i++){
//         for(int j = 0; j < 5; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

// }


//Question :- print factorial of number n

int main(){
    int n;
    int fact = 1;

    cout<<"Enter a value:- ";
    cin>>n;

    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    cout<<"Factorial is:- "<<fact<<endl;

    return 0;
}
