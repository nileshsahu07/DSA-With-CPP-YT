#include <iostream>
#include <vector>
using namespace std;

// int main(){

//     //1. 
//     // vector<int> vec; //size = 0

//     // cout<<vec[0]; //throw segmentation error due to vector is empty at this time

//     //2. 
//     // vector<int> vec = {1,2,3}; //size = 3

//     // cout<<vec[0]; // print 1

//     //3.
//     vector<int> vec(3,0);

//     // cout<<vec[0];
//     // cout<<vec[1];
//     // cout<<vec[2];

//     //for each loop 
//     for(int i : vec){ //in this loop i is value not index so we can give this variable name val
//         cout<<i<<" ";
//     }


//     return 0;
// }


// int main(){
//     vector<int> vec;

//     cout<<vec.size()<<endl;

//     vec.push_back(25);
//     vec.push_back(35);

//     cout<<vec.size()<<endl;
//     cout<<vec[0]<<endl;

    
//     cout<<vec.front()<<endl;
//     cout<<vec.back()<<endl;

//     vec.pop_back();

//     cout<<vec.at(0)<<endl;
// }


//vector capacity dynamic allocation=>

// int main(){
//     vector<int> vec;

//     vec.push_back(0);
//     vec.push_back(1);
//     vec.push_back(2);

//     cout<<vec.size()<<endl; //3
//     cout<<vec.capacity()<<endl; //4
// }


//leetcode question 136 single number => it is like unique value

// int singleNumber(vector<int> &nums){
//     int ans = 0;

//     for(int val : nums){
//         ans = ans ^ val;
//     }

//     return ans;
// }

// int main(){
//     vector<int> nums = {4,1,2,1,2};

//     cout<<singleNumber(nums)<<endl;

//     return 0;
// }


//linearSearch with vector =>

// int main(){
//     vector<int> vec = {1,2,3,4,5,6,7,8};

//     int target = 6;

//     for(int i=0; i<vec.size(); i++){
//         if(vec[i] == target){
//             cout<<i<<endl;
//         }
//     }

//     return 0;
// }


// reverse array =>

// void reverse(vector<int> &vec, int n){
//     int start = 0;
//     int end = n-1;

//     while(start<end){
//         swap(vec[start],vec[end]);
//         start++;
//         end--;
//     }

//     // for(int val : vec){
//     //     cout<<val<<" ";
//     // }
// }

// int main(){
//     vector<int> vec = {1,2,3,4,5,6,7,8};

//     for(int val : vec){
//         cout<<val<<" ";
//     }
//     cout<<endl;

//     reverse(vec,vec.size()); //without & above and below loop print 1 to 8 means array is not changing in main fun only change in reverse function

//     for(int val : vec){
//         cout<<val<<" ";
//     }

//     return 0;
// }

