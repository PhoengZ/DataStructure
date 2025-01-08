#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main(){
    int n,m,l;
    cin >> n >> m >> l;
    vector <int> v(l);
    vector <char> vc;
    set <string> s;
    for (char x = 'a';x<='z';x++){
        vc.push_back(x);
    }
    for (int i = 0;i<l;i++){
        cin >> v[i];
    }
    for (int i = 0;i<n;i++){
        string x;
        cin>>x;
        s.insert(x);
    }
    for (int i = 0;i<m;i++){
        string x;
        cin>>x;
        string out =  "";
        for (int j  =0;j<l;j++){
            auto low = lower_bound(vc.begin(),vc.end(),x[j]);
            int ind = (low-vc.begin())+v[j];
            out += vc[ind%26];
        }
        if (s.count(out)){
            cout << "Match" << "\n"; 
        }else{
            cout << "Unknown" << "\n"; 
        }
    }
    return 0;
}