#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,start;
    cin>> n >> m >> start;
    map <int,int> change;
    vector <int> sav;
    for (int i = 0;i<n;i++){
        int a,b;
        cin>> a>>b;
        change[a] = b;
    }
    int total = 0;
    int p = start;
    for (int i = 0;i< 100000;i++){
        if (change.count(i)){
            p = change[i];
        }
        total += p;
        sav.push_back(total);
    }
    for (int i = 0;i<m;i++){
        int P,x;
        cin>> P >> x;
        auto low = lower_bound(sav.begin(),sav.end(),P);
        int ind = low-sav.begin();
        if (ind > x){
            auto low_1 = lower_bound(sav.begin(),sav.end(),P + sav[x]);
            ind = low_1-sav.begin();
            cout << ind << " ";
        }else{
            cout << ind << " ";
        }
    }
    return 0;
}