#include <iostream>
#include <map>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int n,m;
    cin>> n>>m;
    map <int,int> mp;
    for (int i = 0;i<n;i++){
        int x;
        cin>>x;
        if (mp.count(x)){
            mp[x]++;
        }else{
            mp[x] = 1;
        }
    }
    int round = 1;
    bool check =false;
    for (int i = 0;i<m;i++){
        int x;
        cin >>x;
        
        for (int j = 0;j<x;j++){
            int y;
            cin>>y;
            auto low = mp.upper_bound(y);
            if (low != mp.end()){
                mp[low->first]--;
            }else{
                check =true;
            }
            if (mp[low->first] == 0){mp.erase(low->first);}
        }
        if (check){
            break;
        }
        round++;
    }
    cout << round;
    return 0;
}