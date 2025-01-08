#include <iostream>
#include <algorithm>
//#include <set>
#include <vector>

using namespace std;

int main(){
    int n,m;
    cin >> n>>m;
    //set <int> s_1;
    //set <int> s_2;
    vector <int> v;
    vector <int> v_2;
    for (int i =0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    for (int i =0;i<m;i++){
        int j;
        cin>> j;
        auto it = lower_bound(v.begin(),v.end(),j);
        auto it_1 = find(v_2.begin(),v_2.end(),j);
        if (*it == j &&  it_1== v_2.end()){
            v_2.push_back(j);
        }
        
    }
    sort(v_2.begin(),v_2.end());
    for (int i = 0;i < v_2.size();i++){
        cout << v_2[i] << " ";
    }
    return 0;
}