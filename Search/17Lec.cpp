#include <iostream>
using namespace std;

int binarySearch(int arr[],int n, int target){
    int start = 0, end = n-1;
    
    while(start<=end){
        // int mid = (start+end)/2; //due to overflow 

        int mid = start + (end - start)/2;
        if(target>arr[mid]){
            start = mid+1;
        }else if(target<arr[mid]){
            end = mid-1;
        }else{
            return mid;
            break;
        }
    }

    return -1;
}

int main(){

    int arr[] = {-1,0,3,4,5,9,12};
    int n = sizeof(arr)/sizeof(int);

    int target = 12;

    cout<<binarySearch(arr,n,target)<<endl;

    return 0;
}