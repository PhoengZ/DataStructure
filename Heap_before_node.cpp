#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int mSize,n;
    cin>> mSize>>n;
    queue<int> q;
    q.push(n);
    vector<int>vp;
    while (!q.empty()){
        int a = q.front();
        vp.push_back(a);
        int left = 2*a+1;
        int right =2*a+2;
        if (left < mSize)q.push(left);
        if (right< mSize)q.push(right);
        q.pop();
    }
    vector <int> v(mSize-vp.size());
    int idx = 0;
    int ind = 0;
    for (int i =0;i<mSize;i++){
        if (idx == vp.size()||i < vp[idx]){
            v[ind] = i;
            ind++;
        }
        else idx++;
    }
    cout << v.size() << endl;
    for (auto &e:v){
        cout << e << " ";
    }
    return 0;
}