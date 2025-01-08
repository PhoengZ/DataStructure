#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);std::cin.tie(0);
    int n,l;
    cin>> n>> l;
    map <string,set<string>> m;
    for (int i = 0;i<n;i++){
        string x,y;
        cin >> x >> y;
        if (!m.count(x)){
            set <string> s;
            s.insert(y);
            m[x] = s;
        }else{
            m[x].insert(y);
        }
    }
    for (int i = 0;i< l;i++){
        int z;
        cin >>z;
        vector <pair<string,string>> v;
        bool check = false;
        for (int j = 0;j<z;j++){
            string a,b;
            cin >> a >> b;
            if (!m.count(a) || !m[a].count(b)){
                check = true;
            }
            else{
                if (!check){
                    pair <string,string> p = make_pair(a,b);
                    v.push_back(p);
                }
            }
        }
        if (check){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            for (int k = 0;k<v.size();k++){
                if (m[v[k].first].count(v[k].second)){
                    m[v[k].first].erase(v[k].second);
                }
            }
        }
        
    }
    return 0;
}