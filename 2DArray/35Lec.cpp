#include <iostream>
#include <climits>
#include <vector>
using namespace std;

// int main(){

//     int arr[5] = {1,2,3,4,5};
//     // int matrix [4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int matrix [4][3];

//     int rows = 4;
//     int cols = 3;

//     //input
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cin>>matrix[i][j];
//         }
//     }

//     cout<<matrix[2][1]<<endl;

//     matrix[2][1] = 19;

//     cout<<matrix[2][1]<<endl;

//     cout<<endl; 

//     //output
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }


//lenear search =>

// bool lenearSearch(int matrix[][3], int rows , int cols, int key){ // we can skip row number but we cant skip col num

//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             if(matrix[i][j]==key){
//                 return true;
//             }
//         }
//     }
//     return false;

// }

// pair<int, int> linearSearch(int matrix[][3], int rows, int cols, int key) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             if (matrix[i][j] == key) {
//                 return {i, j};   // Return row and column
//             }
//         }
//     }
//     return {-1, -1};   // Key not found
// }

// int main(){
//     int matrix [4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int key = 8;

//     int rows = 4;
//     int cols = 3;

//     // cout<<lenearSearch(matrix, rows , cols, key)<<endl;

//     pair<int, int> ans = linearSearch(matrix, rows, cols, key);

//     if (ans.first == -1) {
//         cout << "Key not found" << endl;
//     } else {
//         cout << "Key found at Row = " << ans.first
//              << ", Column = " << ans.second << endl;
//     }

//     return 0;
// }



//max row and col sum =>

// int maxRowSum(int matrix[][3], int rows, int cols){
//     int maxSum = INT_MIN;
    
//     for(int i=0; i<rows; i++){
//         int rowSum = 0;
//         for(int j=0; j<cols; j++){
//             rowSum += matrix[i][j];
//         }
//         if(maxSum < rowSum){
//             maxSum = rowSum;
//         }
//     }
//     return maxSum;
// }

// int maxColSum(int matrix[][3], int rows, int cols){
//     int maxSum = INT_MIN;
    
//     for(int j=0; j<cols; j++){
//         int colSum = 0;
//         for(int i=0; i<cols; i++){
//             colSum += matrix[i][j];
//         }
//         if(maxSum < colSum){
//             maxSum = colSum;
//         }
//     }
//     return maxSum;
// }

// int main(){
//     int matrix [4][3] = {{1,2,3},{4,5,6},{7,8,9}};

//     int rows = 3;
//     int cols = 3;

//     cout<<"ans:- "<<maxRowSum(matrix, rows, cols)<<endl;
//     cout<<"ans:- "<<maxColSum(matrix, rows, cols)<<endl;

//     return 0;
// }



//diagonal sum =>

// int diagonalSum(int matrix[][3], int n){
//     int diagonalSum = 0;

//     // for(int i=0; i<n; i++){ //tc :- O(n2)
//     //     for(int j=0; j<n; j++){
//     //         if(i==j){
//     //             diagonalSum += matrix[i][j];
//     //         }else if(j == n-i-1){
//     //             diagonalSum += matrix[i][j];
//     //         }
//     //     }
//     // }

//     //or 

//     for(int i=0; i<n; i++){ //tc :- O(n)
//         diagonalSum += matrix[i][i];

//         if(i != n-i-1){
//             diagonalSum += matrix[i][n-i-1];
//         }
//     }
//     return diagonalSum;
// }

// int main(){
//     int n = 3;
//     int matrix [3][3] = {{1,2,3},{4,5,6},{7,8,9}};

//     cout<<"ans:- "<<diagonalSum(matrix, n)<<endl;

//     return 0;
// }


//vector matrix =>

int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};

    // vector<vector<int>> mat = {{1,2,3},{4,5,6,10,11},{7,8,9}}; // we can do this also in vector metrix

    //rows => mat.size()
    //cols => mat[i].size()

    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[i].size(); j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}



