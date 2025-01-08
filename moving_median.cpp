#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,w;
    cin>> n>>w;
    vector <pair<int,int>> v(n);
    for (int i = 0;i<n;i++){
        cin >> v[i].first;
        v[i].second = i;
    }
    set <pair<int,int>> s(v.begin(),v.begin()+w+1);
    auto it = next(s.begin(),w/2);
    vector <int> vp;
    for (int i = w+1;i<v.size();i++){
        vp.push_back(it->first);
        s.insert(v[i]);
        if (v[i].first < it->first)it--;
        if (v[i-w-1].first <= it->first) it++;
        pair <int,int> p = v[i-w-1];
        s.erase(p);
    }
    vp.push_back(it->first);
    for (int &e:vp){
        cout << e << " ";
    }
    /*for (int i = 0;i+w<v.size();i++){
        vector <int> vp;
        for (int j = i;j<=i+w;j++){
            vp.push_back(v[j]);
        }
        sort(vp.begin(),vp.end());
        int index = vp.size()/2;
        cout << vp[index] <<" ";
    }*/
    /*for (int i = 0;i+w<v.size();i++){
        set<pair<int,int>> s(v.begin()+i,v.begin()+i+w+1);
        auto it = next(s.begin(),w/2);
        
        cout << it->first <<" ";
    }*/
    return 0;
}//ระหว้างเก็บค่าอาจจะ ระบุ medianเลย?