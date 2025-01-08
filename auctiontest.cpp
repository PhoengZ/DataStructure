#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n,m,a;
    cin>> n>>m>>a;
    vector<map<int,int>> user_bid(m+1); // index แสดงถึง คนที่ 1 ถึง m โดยยกเว้น index ที่ 0 และแต่ละindex จะเก้บแมพที่key เป็นไอเทมชี้นที่ i และ ราคาที่ bid
    map<int,set<pair<int,int>>> item_bid; // key เก็บ item ,data เก็บ 
    vector <int> piece(n+1);
    vector <vector <int>> user_win(m+1);
    for (int i = 1;i<=n;i++){
        int x;
        cin >>x;
        piece[i] = x;
        set <pair<int,int>> s;
        item_bid[i] =  s;
    }
    for (int i =0;i<a;i++){
        string x;
        cin>>x;
        if (x == "B"){
            int user,item,bid;
            cin >>user >> item >> bid;
            pair <int,int> px = make_pair(bid,user);
            if (user_bid[user].count(item)){
                pair <int,int> p = make_pair(user_bid[user][item],user);
                item_bid[item].erase(p);
                user_bid[user][item] = bid;
            }else{
                user_bid[user][item] = bid;
            }
            item_bid[item].insert(px);
        }else{
            int user,item;
            cin>> user>>item;
            if (user_bid[user].count(item)){
                pair<int,int> p_fake = make_pair(user_bid[user][item],user);
                user_bid[user].erase(item);
                item_bid[item].erase(p_fake);
            }
        }
        
    }
    for (int i =1;i<=n;i++){
        if (item_bid[i].size() == 0){continue;}
        auto it = item_bid[i].end();
        it--;
        if (item_bid[i].size() < piece[i]) piece[i] = item_bid[i].size();
        for (int j = 0;j<piece[i];j++){
            user_win[it->second].push_back(i);
            it--;
        }
    }
    for (int i = 1;i<m+1;i++){
        if (user_win[i].size() == 0){
            cout << "NONE" <<endl;
        }else{
            for (auto &x:user_win[i]){
                cout << x << " ";
            }
            cout << endl;
        }
        
    }
    return 0;
}