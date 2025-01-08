#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
using namespace std;

int main(){
    int n,m,a;
    cin >> n>>m>>a;
    vector <set<pair<int,int>>> sort_item;
    vector <int> piece;
    map <int,set <pair<int,int>>> mp;
    map <int,vector<int>> u_win;
    for (int i = 0;i<n;i++){
        int x;
        cin>>x;
        piece.push_back(x);
        set <pair<int,int>> s;
        sort_item.push_back(s);
    }
    for (int i = 0;i<a;i++){
        string x;
        cin>>x;
        if (x == "B"){
            int user,item,bid;
            cin >> user >> item >> bid;
            item--;
            pair <int,int> p_fake = make_pair(user,0);
            pair <int,int> u_sell = make_pair(user,bid);
            pair <int,int> p = make_pair(bid,user);
            if (mp.count(item)){
                auto low = mp[item].lower_bound(p_fake);
                if (low != mp[item].end()&&low->first ==user){
                    mp[item].erase(*low);
                    pair <int,int> ep = make_pair(low->second,low->first);
                    sort_item[item].erase(ep);
                }
                mp[item].insert(u_sell);
                sort_item[item].insert(p);
            }else{
                set <pair<int,int>> s;
                s.insert(u_sell);
                mp[item] = s;
                sort_item[item].insert(p);
            }
        }else{
            int user,item;
            cin>> user>>item;
            pair <int,int> p_fake = make_pair(user,0);
            if (mp.count(item)){
                auto low = mp[item].lower_bound(p_fake);
                if (low != mp[item].end()&&low->first ==user){
                    mp[item].erase(*low);
                    pair <int,int> ep = make_pair(low->second,low->first);
                    sort_item[item].erase(ep);
                }
            }
        }
    }
    for (int i = 0;i<n;i++){
        if (sort_item[i].size() == 0)continue;
        auto it = sort_item[i].end();
        it--;
        for (int j = 0;j<piece[i];j++){
            if (u_win.count(it->second)){
                u_win[it->second].push_back(i+1);
            }else{
                vector <int> ind;
                ind.push_back(i+1);
                u_win[it->second] = ind;
            }
            if (it!= sort_item[i].begin())it--;
            else{break;}
        }
    }
    for (int i =1;i<=m;i++){
        if (u_win[i].size() == 0){
            cout << "NONE" <<endl;
        }else{
            for (int &y:u_win[i]){
                cout << y << " ";
            }
            cout << endl;
        }
        
    }
    return 0;
    
}