#include <iostream>
#include <queue>
#include <vector>
#include <set>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector <priority_queue<int>> v(m);
    vector <int>  power_each_ind(n);
    set<pair<int,int>> s;
    for (int i = 0;i<n;i++){
        cin >>power_each_ind[i];
    }
    for (int i = 0;i<m;i++){
        v[i].push(1);
        pair<int,int> p = make_pair(1,i);
        s.insert(p);
    }
    for (int i =0;i<n;i++){
        int ind;
        cin>> ind;
        pair <int,int> pe = make_pair(v[ind].top(),ind);
        s.erase(pe);
        v[ind].push(power_each_ind[i]);
        pair <int,int> p = make_pair(v[ind].top(),ind);
        s.insert(p);
        cout << s.begin()->first << " ";
    }
    return 0;
}