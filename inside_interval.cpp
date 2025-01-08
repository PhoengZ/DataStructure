#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(0); 
    int n,m;
    cin>>n>>m;
    vector <int> v;
    for (int i = 0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(x);
        v.push_back(y);
    }
    sort(v.begin(),v.end());
    for (int i = 0;i<m;i++){
        int a;
        cin>> a;
        auto low = lower_bound(v.begin(),v.end(),a);
        int ind = low-v.begin();
        if (*low == a || ind %2 == 1){
            cout<< "1 ";
        }else cout << "0 ";
    }
    return 0;
}