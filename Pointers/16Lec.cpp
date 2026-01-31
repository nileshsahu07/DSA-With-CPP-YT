#include <iostream>
using namespace std;

// int main(){

//     int a = 10;
//     int* ptr = &a;

//     cout<<&a<<endl; // add of a
//     cout<<ptr<<endl; // add of a

//     //derefrence operator =>

//     cout<<*(&a)<<endl; // value of a 10
//     cout<<*(ptr)<<endl; // value of a 10

//     //double pointer =>

//     int **ptr2 = &ptr;

//     cout<<&ptr<<endl; // add of ptr
//     cout<<ptr2<<endl; // add of ptr

//     // double derefrence operator =>

//     cout<<*(&ptr)<<endl; //add of a
//     cout<<*(ptr2)<<endl; //add of a


//     cout<<*(ptr)<<endl; //value of a 10
//     cout<<**(&ptr)<<endl; //value of a 10
//     cout<<**(ptr2)<<endl; //value of a 10

//     return 0;
// }


// Pass by refrence =>

// void withoutPtr(int a){
//     a = 20;
// }

// void withPtr(int *ptr){
//     *ptr = 20;
// }

// void withRefrence(int &a){
//     a = 30;
// }

// int main(){

//     int a = 10;

//     withoutPtr(a);

//     cout<<a<<endl;

//     withPtr(&a);

//     cout<<a<<endl;

//     withRefrence(a);

//     cout<<a<<endl;

//     return 0;
// }



// Array Pointer =>

int main(){
    int arr[] = {1,2,3,4,5};

    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<*arr<<endl;

    cout<<endl;

    //arr is a constant in cpp so we cant change its value 

    // int a = 10;
    // arr = &a; //it throws error

    cout<<*arr<<endl;//1
    cout<<*(arr+1)<<endl;//2
    cout<<*(arr+2)<<endl;//3
    cout<<*(arr+3)<<endl;//4
    cout<<*(arr+4)<<endl;//5

    cout<<endl;

    //pointers subtract =>

    int* ptr1; //100
    int* ptr2 = ptr1+2; //108

    cout<<ptr2 - ptr1<<endl; //2

    cout<<(ptr2 > ptr1)<<endl; // 1 means true

    return 0;
}