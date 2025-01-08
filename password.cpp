#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    vector<char> alphabet;

    for (char letter = 'a'; letter <= 'z';letter++) {
        alphabet.push_back(letter);
    }
    int n,m,l;
    cin>> n>>m>>l;
    vector <int> v(l);
    set <string> s;
    for (int i =0;i<l;i++){
        cin>> v[i];
    }
    for (int i = 0;i<n;i++){
        string x;
        cin>>x;
        s.insert(x);
    }
    for (int i= 0;i<m;i++){
        string y;
        cin>>y;
        string NEW ="";
        for (int j = 0;j<v.size();j++){
            auto it = lower_bound(alphabet.begin(),alphabet.end(),y[j]);
            int ind = (it-alphabet.begin())+v[j];
            ind %= 26;
            NEW+= alphabet[ind];
        }
        if (s.count(NEW))cout << "Match\n";
        else cout << "Unknown\n";
    }
    return 0;
}