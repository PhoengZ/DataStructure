#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

int main(){
    int n,m;
    vector <int> v;
    cin>> n>>m;
    priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    for (int i = 0;i < n; i++ ){
        int x;
        cin>>x;
        v.push_back(x);
        pair <int,int> p = make_pair(0,i);
        pq.push(p);
    }
    vector <int> out(m);
    for (int i = 0 ;i< m;i++){
        pair<int,int> n_t = pq.top();
        pq.pop();
        out[i] = n_t.first;
        int time = n_t.first+v[n_t.second];
        int chef = n_t.second;
        pair <int,int> p = make_pair(time,chef);
        pq.push(p);
    }
    for(int i = 0;i< m;i++){
        cout << out[i] <<endl;
    } 
    return 0;
}