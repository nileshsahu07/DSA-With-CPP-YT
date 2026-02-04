//Allocate Books Problem =>
#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr,int n, int m, int maxAllowedPages){
    int students = 1, pages = 0;

    for(int i=0; i<n; i++){//O(n)
        if(arr[i]>maxAllowedPages){
            return false;
        }

        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }else{
            students++;
            pages += arr[i];
        }
    }

    return students > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n, int m){
    if(m > n){
        return -1;
    }
    int sum = 0;

    for(int i=0; i<n; i++){//O(n)
        sum += arr[i];
    }

    int ans = -1;
    int st = 0, end = sum;

    while(st<=end){//O(log n*n)
        int mid = st + (end - st)/2;

        if(isValid(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }

    return ans;
}

int main(){  //overall tc = O(n log(sum))
    vector<int> arr = {2,1,3,4};
    // vector<int> arr2 = {15,17,20}; // dry run for this ans is //32

    int n = arr.size(); 
    // int n2 = arr2.size();
    int m = 2;
    // int m2 = 2;

    cout<<allocateBooks(arr,n,m)<<endl;

    return 0;
}