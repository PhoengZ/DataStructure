#include <iostream>
#include <vector>

using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it,int k) {
    int mid = it-v.begin();
    int beg = mid-k;
    int end = mid+k;
    if (beg < 0){beg = 0;}
    if (end > v.size()-1){end = v.size()-1;}
    while (beg <= end){
        v.erase(v.begin()+beg);
        end--;
    }
    return v;
}

int main() {
    int n,j,k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result) {
        cout << x << endl;
    }
}