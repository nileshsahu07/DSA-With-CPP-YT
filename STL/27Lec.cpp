#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;

// int main(){

//     list<int> l;

//     l.push_back(1);
//     l.push_back(2);
//     l.push_front(3);
//     l.push_front(5);

//     for(int val : l){
//         cout<<val<<" ";
//     }

//     // cout<<l[2]<<endl; //list does not have random access so throw error

//     cout<<endl;

    
//     deque<int> d;

//     d.push_back(1);
//     d.push_back(2);
//     d.push_front(3);
//     d.push_front(5);

//     for(int val : d){
//         cout<<val<<" ";
//     }
//     cout<<endl;

//     cout<<d[2]<<endl;//it has random access

//     return 0;
// }


// int main(){
//     //pair
//     // for this we dont need to include something

//     // pair<int,int> p = {1,2};

//     // cout<<p.first<<endl;
//     // cout<<p.second<<endl;

//     // pair<string,int> p = {"Nilesh",2};

//     // cout<<p.first<<endl;
//     // cout<<p.second<<endl;

//     // pair<int,pair<int,char>> p = {1,{2,'N'}};

//     // cout<<p.first<<endl;
//     // cout<<p.second.first<<endl;
//     // cout<<p.second.second<<endl;


//     //we can create vector of pair also =>
//     vector<pair<int,int>> vec = {{1,2},{2,3},{3,4}};

//     // vec.push_back({4,5}); //insert

//     //or

//     vec.emplace_back(4,5); //in-place object create

//     // for(pair<int,int> p :vec){
//     //     cout<<p.first<<" "<<p.second<<endl;
//     // }

//     //or
//     for(auto p :vec){
//         cout<<p.first<<" "<<p.second<<endl;
//     }


//     return 0;
// }





// int main(){
//     //stack
//     stack<int> s;

//     s.push(1);
//     s.push(2);
//     s.push(3);

//     // cout<<s.top()<<endl; // 3

//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }

//     cout<<endl;

//     stack<int> s1;

//     s.push(1);
//     s.push(2);
//     s.push(3);

//     stack<int> s2;

//     cout<<"s1 size:- "<<s1.size()<<endl; //0 due to swap make changes in original stack

//     s2.swap(s);

//     cout<<"s1 size:- "<<s1.size()<<endl; //0
//     cout<<"s2 size:- "<<s2.size()<<endl; //3


//     return 0;
// }



// int main(){
//     // Queue

//     queue<int> q;

//     q.push(1);
//     q.push(2);
//     q.push(3);

//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }

//     cout<<endl;

//     return 0;
// }


// int main(){
//     // Priority Queue

//     // priority_queue<int> q;

//     // if we want to build a reverse order priority queue
//     priority_queue<int, vector<int>, greater<int>> q;

//     q.push(5);
//     q.push(3);
//     q.push(10);
//     q.push(4);

//     while(!q.empty()){
//         cout<<q.top()<<" ";
//         q.pop();
//     }

//     cout<<endl;

//     return 0;
// }


// int main(){
//     //map
//     map<string,int> m;

//     m["tv"] = 100;
//     m["laptop"] = 100;
//     m["headphones"] = 50;
//     m["tablet"] = 120;
//     m["watch"] = 50;

//     // m.insert({"camera",25});
//     //or
//     m.emplace("camera",25);

//     m.erase("tv");

//     for(auto p: m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }

//     cout<<"count = "<<m.count("laptop")<<endl;
//     cout<<"count = "<<m["laptop"]<<endl;


//     if(m.find("camera") != m.end()){
//         cout<<"found \n";
//     }else{
//         cout<<"not found \n";
//     }
//     return 0;
// }



// int main(){
//     //multimap
//     multimap<string,int> m;

//     m.emplace("tv",100);
//     m.emplace("tv",100);
//     m.emplace("tv",100);
//     m.emplace("tv",100);

//     // m.erase("tv");

//     m.erase(m.find("tv"));

//     for(auto p: m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }

//     return 0;
// }


// int main(){
//     //multimap
//     unordered_map<string,int> m;

//     m.emplace("tv",100);
//     m.emplace("laptop",100);
//     m.emplace("pc",100);
//     m.emplace("keyboard",100);

//     for(auto p: m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }

//     return 0;
// }


int main(){
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4); //when check only lower bound then comment this
    s.insert(5);

    s.insert(1);
    s.insert(2);
    s.insert(3);

    cout<<"lowerBound :- "<<*(s.lower_bound(4))<<endl;//4
    cout<<"lowerBound :- "<<*(s.upper_bound(4))<<endl;//4
    for(auto val : s){
        cout<<val<<" ";
    }

    cout<<endl;

    return 0;
}