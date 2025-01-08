#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    map <int,vector <int>> m;
    bool sur = false;
    bool equal = false;
    vector <int> get_ind;
    for (int i =0;i<n;i++){
        int k;
        cin>>k;
        if (m.count(k)){
            sur = true;
        }
        m[k].push_back(i);
        get_ind.push_back(k);
    }
    sort(get_ind.begin(),get_ind.end());
    for (int i = 1;i<=n;i++){
        if (i != get_ind[i-1]){
            equal = true;
            break;
        }
    }
    if (!sur && !equal){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}