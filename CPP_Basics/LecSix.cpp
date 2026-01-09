#include <iostream>
using namespace std;

//convert decimal to binary with code

int decToBinary(int decNum){
    int ans = 0, pow = 1;

    while(decNum > 0){
        int rem = decNum % 2; 
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }

    return ans; //binary number
}

//convert binary to decimal with code

int binToDecimal(int binNum){
    int ans = 0, pow = 1;

    while (binNum > 0){
        int rem = binNum % 10;

        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }

    return ans;
    
}

int main(){

    int decNum = 10;

    int binNum = 1010;

    cout<<decToBinary(decNum)<<endl;
    cout<<binToDecimal(binNum)<<endl;

    return 0;
}