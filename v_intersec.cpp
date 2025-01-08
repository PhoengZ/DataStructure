#include <iostream>
//#include <limits.h>
#include <set>

using namespace std;

int main(){
    int n,m;
    cin>>n >> m;
    set <int> s1;
    set <int> s2;
    for (int i =0;i<n;i++){
        int x;
        cin >> x;
        s1.insert(x);
    }
    for (int i = 0;i<m;i++){
        int y;
        cin >> y;    
        auto it = s1.find(y);
        if (it != s1.end()){
            s2.insert(y);
        }
    }
    for (auto it = s2.begin();it!= s2.end();it++){
        cout << *it << " ";
    }
    return 0;
}