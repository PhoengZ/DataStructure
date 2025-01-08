#include <iostream>
#include <string>
#include <iomanip>
#include <map>

using namespace std;

int main(){
    cout << std::fixed << std::setprecision(2);
    int n;
    map <int,pair<int,int>> s_j;
    map <string,pair<int,int>> s_n;
    cin>> n;
    for (int i = 0;i< n;i++){
        int sub,score;
        string name;
        pair <int,int> p;
        cin >> sub >> name >> score;
        if (s_j.count(sub)){
            s_j[sub].first += score;
            s_j[sub].second ++;
        }else{
            s_j[sub].first = score;
            s_j[sub].second = 1;
        }
        if(s_n.count(name)){
            s_n[name].first += score;
            s_n[name].second++;
        }else{
            s_n[name].first = score;
            s_n[name].second = 1;
        }
    }
    for (auto it = s_j.begin();it!= s_j.end();it++){
        cout << it->first << " " << (it->second.first+0.0)/it->second.second<<endl;
    }
    for (auto it = s_n.begin();it!= s_n.end();it++){
        cout << it->first << " " << (it->second.first+0.0)/it->second.second<<endl;
    }
    return 0;
}