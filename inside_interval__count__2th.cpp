#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m,k;
    cin>> n>>m>>k;
    vector  <int> v(n);
    for (int i = 0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for (int i = 0;i<m;i++){
        int x;
        cin >>x;
        auto left = lower_bound(v.begin(),v.end(),x-k);
        auto right = lower_bound(v.begin(),v.end(),x+k);
        int total = right-left;
        if (*right == x+k) total+=1;
        cout << total << " ";
    }
    return 0;
}