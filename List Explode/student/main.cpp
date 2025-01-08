#include <iostream>
#include "list.h"
#include "vector.h"
#include "student.h"

using namespace std;

int main() {
    int n,t;
    CP::list<int> l;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>t;
        l.push_back(t);
    }
    CP::vector<CP::list<int>> result = l.explode();
    cout<<"Vector size is "<<result.size()<<'\n';
    for(int i = 0 ; i < result.size() ; i++){
        cout<<"v["<<i<<"]"<<" Size is "<<result[i].size()<<'\n';
        auto it = result[i].begin();
        while(it != result[i].end()){
            cout<<*it<<' ';
            it++;
        }
        cout<<'\n';
    }
    return 0;
}
