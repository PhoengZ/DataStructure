#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(){
    int n,k;
    cin >> n>> k;
    map <string,int> m;
    vector <int> v;
    for (int i = 0;i< n;i++){
        string x;
        cin>>x;
        if (m.count(x)){
            m[x]++;
        }else{
            m[x] = 1;
        }
    }
    for (auto it = m.begin();it!= m.end();it++){
        int p = it->second;
        v.push_back(p);
    }
    sort(v.begin(),v.end(),greater<int>());
    if (m.size() <=k){
        cout << v.back();
    }else{
        int MAX = v[0];
        for (int i = 0;i<v.size();i++){
            if (v[i] <= MAX){
                if (k!= 1){
                    k--;
                }else{
                    cout<< v[i];
                    break;
                }

            }
        }
    }

    return 0;
}