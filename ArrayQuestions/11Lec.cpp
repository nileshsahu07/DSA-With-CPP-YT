#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//Pair Sum => Brute force approach => time O(n2)

// vector<int> pairSum(vector<int> nums, int n,int target){
//     vector<int> ans;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(nums[i] + nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }

//     return ans;
// }

// int main(){
//     vector<int> nums = {2,7,11,15};
//     int n = nums.size();
//     int target = 13;

//     vector<int> ans = pairSum(nums,n,target);

//     cout<<ans[0]<<", "<<ans[1]<<endl;

//     return 0;
// }


//Optimized approach => O(n)

// vector<int> pairSum(vector<int> nums, int n,int target){
//     vector<int> ans;

//     int start = 0;
//     int end = n-1;

//     while(start<end){
//         int sum = nums[start] + nums[end];

//         if(sum>target){
//             end--;
//         }else if(sum<target){
//             start++;
//         }else{
//             ans.push_back(start);
//             ans.push_back(end);
//             return ans;
//         }
//     }

//     return ans;

// }

// int main(){
//     vector<int> nums = {2,7,11,15};
//     int n = nums.size();
//     int target = 26;

//     vector<int> ans = pairSum(nums,n,target);

//     cout<<ans[0]<<", "<<ans[1]<<endl;

//     return 0;
// }


//Mejority element => brute force approach O(n2)

// int majorityElement(vector<int> nums){
//     int n = nums.size();

//     for(int val : nums){
//         int freq = 0;

//         for(int el : nums){
//             if(el == val){
//                 freq++;
//             }
//         }

//         if(freq>n/2){
//             return val;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> nums = {1,2,2,1,1,1};

//     int ans = majorityElement(nums);

//     cout<<ans;

//     return 0;
// }


//Optimized Approach => O(n log n)

// int majorityElement(vector<int> nums){
//     int n = nums.size();

//     sort(nums.begin(),nums.end());

//     int freq = 1, ans = nums[0];

//     for(int i=1; i<n; i++){
//         if(nums[i]==nums[i-1]){
//             freq++;
//         }else{
//             freq = 1;
//             ans = nums[i];
//         }

//         if(freq>n/2){
//             return ans;
//         }
//     }
//     return ans;

// }

// int main(){
//     vector<int> nums = {1,2,2,1,1,1};

//     int ans = majorityElement(nums);

//     cout<<ans;

//     return 0;
// }


//more optimized version => o(n)

int majorityElement(vector<int> nums){
    int n = nums.size();

    int freq = 0, ans = 0;

    for(int i=0; i<n; i++){
        if(freq==0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }

    // return ans;

    // when majority elements does not exist then we have to write one more step => ex {1,2,3,4}
    int count = 0;

    for(int val : nums){
        if(val==ans){
            count++;
        }
    }

    if(count > n/2) {
        return ans;
    }else{
        return -1;
    }

}

int main(){
    vector<int> nums = {1,2,2,1,1,1};

    int ans = majorityElement(nums);

    cout<<ans;

    return 0;
}

