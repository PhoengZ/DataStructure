#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n,k;
    long long m;
    vector <long long> v;
    cin>>n>>k;
    cin>>m;
    while (m > 0){
        v.push_back(m);
        m = (m-1)/k;
    }
    long long mRoot = 0;
    cout << v.size()<<endl;
    for (int i =v.size()-1;i>=0;i--){
        long long left = (k*mRoot)+1;
        cout << (v[i] - left) << " ";
        mRoot = v[i];
    }
    return 0;
}