#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
using namespace std;


int main(){
    int n;
    cin>> n;
    vector <int> v;
    queue <int> q;
    
    for (int i  =0i<n;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }
    q.push(0);
    map <int,int> m;
    while (!q.empty()){
        v = q.front();
        q.pop();
        if (m.count(v+1))
        if (v+1 < v.size()){q.push(v+1);}
        if (v+2 < v.size()){q.push(v+2);} 
        if (v+3 < v.size()){q.push(v+3);}
    }
    cout << result;
    return 0;
}