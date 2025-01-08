#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cin>>m;
    for (int i = 0;i<m;i++){
        int mSize,k;
        cin>> mSize>>k;
        vector <int> v(mSize);
        for (int j = 0;j<mSize;j++)cin>>v[j];
        bool check = true;
        for (int j = mSize-1;j>=1;j--){
            if (v[j] > v[(j-1)/k])check = false;
        }
        if (check)cout << "true"<<endl;
        else cout << "false" <<endl;
    }
    return 0;
}
