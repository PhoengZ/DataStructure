#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int n;
  cin>> n;
  map <string,int> m;
  for (int i =0;i<n;i++){
    string x;
    cin >> x;
    if (m.count(x)) m[x]++;
    else m[x] = 1;
  }
  string o = "";
  int MAX = 0;
  for (auto it = m.begin();it != m.end();it++){
    if (it->second >= MAX){
      o = it->first;
      MAX = it->second;
    }
  }
  cout << o << " " << MAX;
}
