#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

int main(){
    int n,m;
    cin>> n>>m;
    vector <pair<int,int>> v(n);
    for (int i =0;i<n;i++){
        int a,b;
        cin >>a>>b;
        pair <int,int> p = make_pair(a,b);
        v[i] = p;
    }
    sort(v.begin(),v.end()); // nlog(n)
    for (int i = 0;i< m;i++){
        int a,b;
        cin>>a>>b;
        pair <int,int> p = make_pair(a,b);
        auto low = lower_bound(v.begin(),v.end(),p);
        if (low->first == a && low->second == b){
            cout << "0 0 ";
        }else if (low == v.begin()){
            cout << "-1 -1 ";
        }else{
            low--;
            cout << low->first << " " << low->second << " ";
        }
    }
    return 0;
}