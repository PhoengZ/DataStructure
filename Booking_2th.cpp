#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n,m;
    cin>> n>>m;
    map <string,set<string>> mp;
    for (int i = 0;i<n;i++){
        string a,b;
        cin>> a>>b;
        if (mp.count(a)){
            mp[a].insert(b);
        }else{
            set <string> s;
            s.insert(b);
            mp[a] = s;
        }
    }
    for (int i =0;i<m;i++){
        int y;
        cin>>y;
        bool check =false;
        vector <pair<string,string>> v; 
        for(int j = 0;j<y;j++){
            string a,b;
            cin>>a>>b;
            if (mp.count(a)&&mp[a].count(b)){
                pair<string,string> p = make_pair(a,b);
                v.push_back(p);
            }else{
                check = true;
            }
        }
        if (check) cout << "NO" <<endl;
        else {
            cout << "YES" << endl;
            for (auto &p:v){
                mp[p.first].erase(p.second);
                if (mp[p.first].empty())mp.erase(p.first);
            }
        }
    }

    return 0;
}