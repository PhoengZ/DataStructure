#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    map <string,int> m;
    for (int i =0;i<n;i++){
        string key;
        cin >> key;
        if (m.count(key)){
            m[key]++;
        }else{
            m[key] = 1;
        }
    }
    for (auto it = m.begin();it!= m.end();it++){
        if (it->second > 1){
            cout << it->first<< " " << it->second<<endl;
        }
    }
    return 0;
}