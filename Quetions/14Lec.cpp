#include <iostream>
#include <climits>
#include <vector>
using namespace std;

// 11. Container With Most Water

// Brute force approach => O(n2)
// int main(){
//     vector<int> hights = {1,8,6,2,5,4,8,3,7};

//     int n = hights.size();

//     int maxWater = 0;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             int width = j - i;
//             int hight = min(hights[i],hights[j]);
//             int currWater = width * hight;

//             maxWater = max(maxWater,currWater);
//         }
//     }

//     cout<<maxWater<<endl;
// }


//Optimal approach (2 pointer approach) =>
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int lp = 0, rp = height.size()-1, maxWater = 0;

//         while(lp < rp){
//             int w = rp - lp;
//             int ht = min(height[lp],height[rp]);
//             int currWater = w * ht;
//             maxWater = max(maxWater,currWater);

//             height[lp] < height[rp] ? lp++ : rp--;
//         }

//         return maxWater;
//     }
// };