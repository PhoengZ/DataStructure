#include <iostream>
#include <map>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    ll int n,t;
    cin >> n>>t;
    map<ll int ,ll int> m;
    for(int i =0;i<n;i++){
        ll int x,y;
        cin >> x>>y;
        m[y] =x;
    }
    for(int i =0;i<t;i++){
        ll int a,b;
        cin >> a>>b;
        auto it_1 = m.find(a);
        auto it_2 = m.find(b);
        if (a!=b && it_1 != m.end()){
            if (it_2 != m.end()){
                auto it_3 = m.find(it_1->second);
                auto it_4 = m.find(it_2->second);
                if (it_3 != m.end() && it_4 != m.end() && it_3->second == it_4->second){
                    cout << "YES"<<endl;
                }else{
                    cout << "NO"<<endl;
                }
            }else{
                cout << "NO"<<endl;
            }
        }else{
            cout << "NO"<<endl;
        }
    }
    return 0;
}