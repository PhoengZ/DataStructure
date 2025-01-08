#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(0);
    int n,m;
    cin >> n>> m;
    int cou = 1;
    vector <int> v;
    bool first = true;
    bool check = true;
    for (int i = 0;i<n;i++){
        int x;
        cin>>x;
        if (first){
            first = false;
        }else{
            if (v[i-1] > x){
                check = false;
            }
        }
        v.push_back(x);
    }
    int a_card = v.size();
    int e_card = 0;
    if (!check){sort(v.begin(),v.end());}
    check = false;
    for (int i =0;i<m;i++){
        int y;
        cin>>y;
        e_card +=y;
        if (e_card > a_card){break;}
        for (int j = 0;j<y;j++){
            int z;
            cin>>z;
            auto low = upper_bound(v.begin(),v.end(),z);
            if (low != v.end()){
                v.erase(low);
            }
            else{
                check = true;
                break;
            }
        }
        if (check)break;
        cou++;
        
    }
    cout << cou;
    return 0;
}