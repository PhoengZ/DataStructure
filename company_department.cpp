#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    map <string,string> name_to_depart;
    map <string,set<string>> depart_to_name;
    for (int i =0;i<n;i++){
        string A,B;
        cin>>A>>B;
        name_to_depart[A] = B;
        depart_to_name[B].insert(A);
    }
    for (int i =0;i<m;i++){
        int t;
        string name,depart;
        cin>>t>>name>>depart;
        if (t == 1){
            if (depart == name_to_depart[name])continue;
            depart_to_name[name_to_depart[name]].erase(name);
            name_to_depart[name] = depart;
            depart_to_name[depart].insert(name);
        }else{
            if (depart_to_name.count(name)){
                for (auto it = depart_to_name[name].begin();it!=depart_to_name[name].end();it++){
                    depart_to_name[depart].insert(*it);
                    name_to_depart[*it] = depart;
                }
                depart_to_name.erase(name);
            }
        }
    }
    for (auto it = depart_to_name.begin();it!= depart_to_name.end();it++){
        cout << it->first << ": ";
        for (auto idx = it->second.begin();idx!= it->second.end();idx++){
            cout << *idx << " ";
        }
        cout << endl;
    }
    return 0;
}