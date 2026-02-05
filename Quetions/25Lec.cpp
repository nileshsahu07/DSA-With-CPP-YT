//Sort Array with 0s, 1s & 2s => leet code 75
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};

    //brute force approach => O(n)
    // sort(arr.begin(),arr.end()); 

    // for(int val : arr){
    //     cout<<val<<" ";
    // }


    //optimized approach => O(n) with 2 passes
    // int count0 = 0, count1 = 0, count2 = 0, n = arr.size();

    // for(int i=0; i<n; i++){ // 1 pass
    //     if(arr[i]==0) count0++;
    //     else if(arr[i]==1) count1++;
    //     else count2++;
    // }

    // int idx = 0;  // 2 pass
    // for(int i=0; i<count0; i++){
    //     arr[idx++] = 0;
    // }
    // for(int i=0; i<count1; i++){
    //     arr[idx++] = 1;
    // }
    // for(int i=0; i<count2; i++){
    //     arr[idx++] = 2;
    // }

    // for(int val : arr){
    //     cout<<val<<" ";
    // }


    //optimal approach => O(n) 1 pass this algorithm name is Dutch National Flag Algorithm
    int n = arr.size(), mid = 0, low = 0, high = n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    for(int val : arr){
        cout<<val<<" ";
    }


    return 0;
}