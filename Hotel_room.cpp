#include <iostream>
#include <map>
#include <set>
using namespace std;

int main(){
    int n,m;
    cin>> n>>m;
    map <int,int> mp;
    map <int,int> ms;
    map <int,set<int>> mx;
    size_t siz = 0;
    set <pair<int,int>>> s;
    for (int i = 1;i<n+1;i++){
        cin>>mp[i];
        mx[mp[i]].insert(i);
        s.insert({mp[i],i});
        siz+=mp[i];
    }
    for (int i =1;i<m+1;i++){
        int x;
        cin>>x;
        if (x < siz){
            auto up = s.upper_bound({x,0});
            if (up == s.begin()){
                if (mx[up->first].size() != 0){
                    auto it = mx[up->first].end();
                    it--;
                }
                siz-= up->first;
                
            }else if (up == s.end()){
                continue;
            }else{

            }
            ms[i] = x;
        }
    }


    return 0;
}