// 50. Pow(x, n)

// class Solution {
// public:
//     double myPow(double x, int n) {
//         if(n == 0) return 1.0;
//         if(x == 0) return 0.0;
//         if(x == 1) return 1.0;
//         if(x == -1 && n % 2 == 0) return 1.0;
//         if(x == -1 && n % 2 != 0) return -1.0;

//         long binForm = n;
//         if(n < 0){
//             x = 1/x;
//             binForm = -binForm;
//         }

//         double ans = 1;
//         while(binForm > 0){
//             if(binForm % 2 == 1){
//                 ans *= x;
//             }

//             x *= x;
//             binForm /= 2;
//         }
//         return ans;
//     }
// };



// 121. Best Time to Buy and Sell Stock

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxProfit = 0, bestBuy = prices[0];

//         for(int i=1; i<prices.size(); i++){
//             if(prices[i] > bestBuy){
//                 maxProfit = max(maxProfit,prices[i] - bestBuy);
//             }
//             bestBuy = min(bestBuy,prices[i]);
//         }
//         return maxProfit;
//     }