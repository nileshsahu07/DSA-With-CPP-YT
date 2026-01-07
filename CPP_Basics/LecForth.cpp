#include <iostream>
using namespace std;

//Topic :- Pattern Print

// int main(){
//     int n = 5;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// abcd print
// int main(){
//     int n = 4;
//     for(int i = 0; i<n; i++){

//         char ch = 'A';

//         for(int j = 0; j<n; j++){
//             cout<<ch<<" ";

//             ch = ch + 1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// in


//triangle

// int main(){
//     int n = 5;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j <= i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }


// int main(){
//     int n = 5;

//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j > 0; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//Floyd's Triangle
// int main(){
//     int n = 4;
//     int num = 1;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j <= i; j++){
//             cout<<num;
//             num++;
//         }
//         cout<<endl;
//     }

//     return 0;
// }


//char triangle

// int main(){
//     int n = 5;
//     char ch = 'A';

//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<ch<<" ";
//         }
//         ch = ch + 1;
//         cout<<endl;
//     }
// }


//Inverted triangle pattern

// int main(){

//     int n = 4;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<" ";
//         }
//         for(int k=0; k<n-i; k++){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }


//     return 0;
// }


//Pyramid Pattern

// int main(){

//     int n = 4;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n-i-1; j++){
//             cout<<" ";
//         }

//         for(int j = 1; j<=i+1; j++){
//             cout<<j;
//         }
        
//         for(int j = i; j > 0; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }

//     return 0;
// }


//Hollow Diamond Pattern

// int main(){

//     int n = 4;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         cout<<"*";
        
//         if(i!=0){
//             for(int j = 0; j<2*i-1; j++){
//                 cout<<" ";
//             }
//             cout<<"*";
//         }

//         cout<<endl;
//     }

//     for(int i = 0; i<n-1; i++){
//         for(int j = 0; j<=i; j++){
//             cout<<" ";
//         }
//         cout<<"*";

//         if(i!=n-2){
//             for(int j=0; j<2*(n-i)-5; j++){
//                 cout<<" ";
//             }
//             cout<<"*";
//         }

//         cout<<endl;
//     }


//     return 0;
// }


//butterfly pattern

int main(){
    int n = 4;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        for(int j=0; j<(n-i-1)*2; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;;
    }

    for (int i = n; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }
}