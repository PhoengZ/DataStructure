#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n,m;
    cin >> n>>m;
    priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector <int> v(n);
    for (int i = 0;i<n;i++){
        cin>>v[i];
        pair <int,int> p = make_pair(0,i);
        pq.push(p);
    }
    while (m!= 0){
        cout<<pq.top().first <<endl;
        pair <int,int> p = make_pair(pq.top().first+v[pq.top().second],pq.top().second);
        pq.pop();
        pq.push(p);
        m--;
    }
    return 0;
}