#include <iostream>
#include <map>
#include <set>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m;
    map <int,int> mp;
    map <int,set <int>> ts;
    cin>> n>>m;
    for (int i =0;i< n;i++){
        int x;
        cin>>x;
        mp[x] = 0;
    }
    for (int i = 0;i< m;i++){
        int a;
        cin>> a;
        if (a == 1){
            int b,c;
            cin>> b>>c;
            if(mp.count(b)){
                int temp = mp[b];
                mp[b]+=c;
                ts[temp].erase(b);
                if (ts[temp].empty())ts.erase(temp);
                if (ts.count(mp[b])){
                    ts[mp[b]].insert(b);
                }else{
                    set <int> s;
                    s.insert(b);
                    ts[mp[b]] = s;
                }
            }
        }else{
            int k;
            cin>>k;
            auto low = ts.lower_bound(k);
            if (low == ts.begin()){
                cout << "NONE" << endl;
            }else{
                --low;
                auto low_1 = low->second.end();
                low_1--;
                cout << *low_1 <<endl;
            }
        }
    }
    return 0;
}