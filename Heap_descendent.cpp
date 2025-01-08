#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int mSize,m;
    cin >>mSize>>m;
    queue <int> q;
    q.push(m);
    vector <int>v;
    while (!q.empty()){
        int a = q.front();
        int left = 2*a+1;
        int right = 2*a+2;
        if (left < mSize)q.push(left);
        if (right < mSize)q.push(right);
        q.pop();
        v.push_back(a);
    }
    cout << v.size() << endl;
    for (auto &e:v){
        cout << e << " ";
    }
    return 0;
}