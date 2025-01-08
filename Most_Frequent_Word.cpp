#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map <string,int> m;
    int n;
    cin>>n;
    for (int i =0;i<n;i++){
        string out;
        cin>> out;
        if (m.count(out)){
            m[out]++;
        }else{
            m[out] = 1;
        }
    }
    int cou = 0;
    string real = "";
    for (auto it = m.begin();it!= m.end();it++){
        if (cou <= it->second){
            real = it->first;
            cou = it->second;
        }
    }
    cout<< real <<" "<<cou;
    return 0;
}