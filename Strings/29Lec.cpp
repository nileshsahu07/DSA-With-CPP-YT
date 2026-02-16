#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

// int main()
// {

//     // char str[100];
//     char str[7];

//     // cout << "Enter a string: ";
//     // cin.getline(str, 100);

//     // cout << "You entered: " << str << endl;


//     cout << "Enter a string: ";
//     // cin.getline(str, 100,'$'); //hello worl$d of something....

//     cin.getline(str, 7); 

//     // cout << "You entered: " << str << endl;

//     for( char ch : str)
//     {
//         cout << ch <<" ";
//     }

//     return 0;
// }



// int main(){

//     char str[7] = "nilesh";

//     // cout<<strlen(str)<<endl;
//     //or

//     int length = 0;
//     for(int i=0; str[i] != '\0'; i++)
//     {
//         length++;
//     }
//     cout<<length<<endl;



//     return 0;
// }



//Strings
// int main(){
//     // string str = "Nilesh";

//     // str = "sahu";
//     // cout<<str<<endl;


//     string str1 = "Nilesh";
//     string str2 = "Sahu";
//     string str3 = "Nilesh";

//     cout<<str1 + str2<<endl;
//     cout<<(str1 == str3)<<endl;
//     cout<<(str1 < str2)<<endl; //because N is less than S in ASCII
//     cout<<str1.length()<<endl;

//     // string str4;

//     // getline(cin,str4);

//     // cout<<"output:"<<str4<<endl;

//     for(int i=0; i<str1.length(); i++)
//     {
//         cout<<str1[i]<<" ";
//     }

//     cout<<endl;

//     for(char ch : str1)
//     {
//         cout<<ch<<" ";
//     }

//     cout<<endl;

//     reverse(str1.begin(), str1.end());
    
//     cout<<str1<<endl;


//     return 0;
// }


bool isPalindrome(string str){
    int st = 0, end = str.length()-1;

    while(st<end){
        if(str[st] != str[end]){
            return false;
        }
        st++;
        end--;
    }

    return true;
}

int main(){
    string str = "nitin";

    cout<<isPalindrome(str)<<endl;

    return 0;
}