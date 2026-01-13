#include <iostream>
#include <climits>
using namespace std;

// int main(){
//     int size = 5;
//     int arr[5] = {20,10,7,-15,24};

//     int smallest = INT_MAX;
//     int largest = INT_MIN;

//     for(int i=0; i<size; i++){
//         // if(arr[i]<smallest){
//         //     smallest = arr[i];
//         // }

//         // if(arr[i]>largest){
//         //     largest = arr[i];
//         // }

//         //OR

//         smallest = min(arr[i],smallest);
//         largest = max(arr[i],largest);
        
//     }

//     cout<<smallest<<endl;
//     cout<<largest<<endl;

//     return 0;
// }



//index print of largest and smallest =>

// int main(){
//     int size = 5;
//     int arr[5] = {20,10,7,-15,24};

//     int smallest = INT_MAX;
//     int largest = INT_MIN;

//     int smallIndex;
//     int largestIndex;

//     for(int i=0; i<size; i++){
//         if(arr[i]<smallest){
//             smallest = arr[i];
//             smallIndex = i;
//         }

//         if(arr[i]>largest){
//             largest = arr[i];
//             largestIndex = i;
//         }
        
//     }

//     cout<<smallIndex<<endl;;
//     cout<<largestIndex<<endl;

//     return 0;
// }


//Pass By Reference =>

// void changeArr(int arr[], int size){
//     cout<<"arr in function:- ";

//     for(int i=0; i<size; i++){
//         cout<<arr[i];
//         arr[i] = arr[i]*2;
//     }
//     cout<<endl;

// }

// int main(){

//     int arr[] = {1,2,3};

//     changeArr(arr,3);

//     cout<<"arr in main:- ";
//     for(int i=0; i<3; i++){
//         cout<<arr[i];
//     }

//     return 0;
// }


//Linear Search =>

// int linearSearch(int arr[], int size,int target){  //time complexity is O(n)
//     for(int i=0; i<size; i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[] = {4,2,7,8,1,2,5};
//     int target = 8;

//     cout<<linearSearch(arr,7,target)<<endl;

//     return 0;
// }


//Reverse an Array => 2 pointers approach

// void reverseArr(int arr[], int n){

//     int start = 0;
//     int end = n - 1;

//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++, end--;
//     }
// }

// int main(){
//     int arr[] = {1,2,3,4,5,6};
    
//     int size = sizeof(arr)/sizeof(int);

//     reverseArr(arr,size);

//     cout<<"reversed array is:- ";
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }


//sum and multiplication of an array =>

// int sum(int arr[],int n){
//     int sum = 0;

//     for(int i=0; i<n; i++){
//         sum += arr[i];
//     }

//     return sum;
// }

// int product(int arr[],int n){
//     int product = 1;

//     for(int i=0; i<n; i++){
//         product *= arr[i];
//     }

//     return product;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
    
//     int size = sizeof(arr)/sizeof(int);   
    
//     cout<<"sum is:- "<<sum(arr,size)<<endl;
//     cout<<"multiplication is:- "<<product(arr,size)<<endl;
    
//     return 0;
// }


//swap the max and min number of an array=>

// void swapNums(int arr[], int n){
//     int smallest = INT_MAX;
//     int largest = INT_MIN;

//     int smallestIndex;
//     int largestIndex;

//     for(int i=0; i<n; i++){
//         if(arr[i]<smallest){
//             smallest = arr[i];
//             smallestIndex = i;
//         }

//         if(arr[i]>largest){
//             largest = arr[i];
//             largestIndex = i;
//         }
        
//     }
//     swap(arr[largestIndex],arr[smallestIndex]);
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
    
//     int size = sizeof(arr)/sizeof(int);   
    
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
    
//     swapNums(arr,size);
    
//     cout<<endl;
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }



//Print all unique values =>

// void uniqueNum(int arr[], int n){
//     for(int i=0; i<n; i++){
//         int count = 0;
//         for(int j=0; j<n; j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count==1){
//             cout<<arr[i]<<" ";
//         }
//     }
// }

// int main(){
//     int arr[] = {1,1,2,2,3,4,5,5};
    
//     int n = sizeof(arr)/sizeof(int);

//     uniqueNum(arr,n);

//     //or

//     // for(int i=0; i<n; i++){
//     //     int idx = -1;
//     //     for(int j=0; j<n;j++){
//     //         if(i!=j && arr[i]==arr[j]) idx = 0;
//     //     }
//     //     if(idx==-1) cout<<arr[i];

//     // }
    
//     return 0;
// }



//Print intersection of 2 arrays=>

void intersection(int arr1[],int arr2[],int n1,int n2){
    for(int i=0; i<n2; i++){
        for(int j=0; j<n1; j++){
            if(arr2[i]==arr1[j]){
                cout<<arr2[i]<<" ";
            }
        }
    }
}

int main(){
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {6,7,3,1};

    int n1 = sizeof(arr1)/sizeof(int);
    int n2 = sizeof(arr2)/sizeof(int);

    intersection(arr1,arr2,n1,n2);

    return 0;
}