#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(0); 
    int n,m,k;
    cin>> n>>m>>k;
    vector <int>v;
    for (int i =0;i<n;i++){
        int x;
        cin>> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for (int i =0;i<m;i++){
        int y;
        cin>>y;
        int check_1 = y-k;
        int check_2 = y+k;
        auto it_min = lower_bound(v.begin(),v.end(),check_1);
        auto it_max = upper_bound(v.begin(),v.end(),check_2);
        
        int cou= 0;
        while (it_min != it_max){
            it_min++;
            cou++;
        }
        cout<< cou << " ";
    }
    return 0;
}
    
