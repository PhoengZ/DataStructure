#include <iostream>
#include <set>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n,m;
    cin>> n>>m;
    set <pair<int,pair <int,int>>> s;
    map <int,int> mp;
    for (int i = 0;i<2*m;i++){
        int x,c,d;
        cin>>x>>c>>d;
        s.insert({c,{d,x}});
    }
    int cou =1;
    int bef_begin,bef_end;
    bool first = true;
    int after_begin,after_end;
    for (auto it = s.begin();it!=s.end();it++){
        if (cou%2 == 1){
            if (first){
                bef_begin = it->second.second;
            }else{
                after_begin = it->second.second;
            }
            cou++;
        }else{
            if (first){
                first = false;
                bef_end = it->second.second;
                mp[bef_begin] = 1;
                mp[bef_end] = 1;
            }else{
                after_end = it->second.second;
                if ((after_begin > bef_begin && after_end  < bef_end)){
                    auto low = mp.lower_bound(after_begin);
                    auto up = mp.lower_bound(after_end);
                    if (low!= mp.end()&&low->first < after_end)low->second++;
                    if (up != mp.end()&&up->first == after_end)up->second++;
                    if (mp.count(after_begin))mp[after_begin]++;
                    else mp[after_begin] = 1;
                    if (mp.count(after_end))mp[after_end]++;
                    else mp[after_end] =1;
                    bef_begin = after_begin;
                    bef_end = after_end;
                }else if ((after_end < bef_begin || after_begin > bef_end) && !mp.count(after_begin)&& !mp.count(after_end)){
                    auto low = mp.lower_bound(after_begin);
                    auto up = mp.lower_bound(after_end);
                    if (low!= mp.end()&&low->first < after_end)low->second++;
                    if (up != mp.end()&&up->first == after_end)up->second++;
                    if (mp.count(after_begin))mp[after_begin]++;
                    else mp[after_begin] = 1;
                    if (mp.count(after_end))mp[after_end]++;
                    else mp[after_end] = 1;
                    bef_begin = after_begin;
                    bef_end = after_end;
                }
            }
            cou++;
        }
    }
    int MAX = 0;
    for (auto it = mp.begin();it!=mp.end();it++){
        if (it->second > MAX)MAX = it->second;
    }
    cout << MAX;
    return 0;
}