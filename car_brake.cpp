#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m,k;
    cin>> n >> m >> k;
    vector <pair<int,int>> vp(n);
    vector <pair <int,int>> speed_time;
    map <int,int> time_speed;
    for (int i =0;i<n;i++){
        cin>>vp[i].first>>vp[i].second;
    }
    sort(vp.begin(),vp.end());
    time_speed[0] = k;
    speed_time.push_back({k,0});
    for (int i =0;i<n;i++){
        k-=vp[i].second;
        if (k> 0){            
            time_speed[vp[i].first] = k;
            speed_time.push_back({k,vp[i].first});
        }else{
            time_speed[vp[i].first] = 0;
            speed_time.push_back({0,vp[i].first});
            break;
        }
    }
    //speed_time.push_back({0,vp[vp.size()-1].first});
    //time_speed[vp[vp.size()-1]]= 0;
    sort(speed_time.begin(),speed_time.end());
    for (int i = 0;i<m;i++){
        int a,q;
        cin>> a>>q;
        if (a == 1){
            auto low = time_speed.lower_bound(q);
            if (low!=time_speed.end()&&low->first == q)cout << low->second<<endl;
            else if (low == time_speed.begin())cout << time_speed[0] << endl;
            else if (low == time_speed.end())cout << 0 << endl;
            else {
                low--;
                cout << low->second<<endl;
            }
        }else{
            auto low = lower_bound(speed_time.begin(),speed_time.end(),make_pair(q,0));
            if (low == speed_time.end())cout << 0<<endl;
            else if (low == speed_time.begin())cout << low->second+1<<endl;
            else {
                low--;
                cout << low->second<<endl;
            }
        }
    }
    return 0;
}