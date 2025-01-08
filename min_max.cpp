#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m;
    cin>> n>>m;
    vector <priority_queue<int>> power_begin_i(m);
    vector <int> power_each_i(n);
    vector<int> each_power(n);
    set <pair<int,int>> s;
    for (int i = 0;i<m;i++){
        power_begin_i[i].push(1);
        pair<int,int> p = make_pair(1,i);
        s.insert(p);
    }
    for (int i = 0;i<n;i++){
        cin >> power_each_i[i];
    }
    for (int i = 0;i<n;i++){
        cin >> each_power[i];
    }
    for (int i = 0;i<n;i++){
        int type = each_power[i];
        int new_pow = power_each_i[i];
        int temp = power_begin_i[type].top();
        pair<int,int> p = make_pair(temp,each_power[i]);
        s.erase(p);
        power_begin_i[type].push(new_pow);
        p = make_pair(power_begin_i[type].top(),type);
        s.insert(p);
        auto it = s.begin();
        cout << it->first << " ";
    }

    return 0;
}