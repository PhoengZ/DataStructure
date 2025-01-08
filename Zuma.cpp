#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n,k,v;
    cin>> n >> k >> v;
    vector <int> vp(n+1);
    map <pair<int,int>,pair<int,int>> m;
    bool first = true;
    int F;
    int cou = 0;
    int index = 0;
    for (int i =0;i<n;i++){
        if (first){
            cin>> F;
            first = false;
            cou++;
        }
        else{
            int g;
            cin>>g;
            if (g == F){
                cou++;
                if (i == n-1){
                    m[{index,i+1}] = {cou,F};
                    cou = 0;
                    index = i;
                    F = g;
                }
            }else{
                m[{index,i}] = {cou,F};
                cou = 0;
                index = i;
                F = g;
            }
        }
    }
    auto low = lower_bound({k,k+1});
    if (low->second.first >=3){
        
    }
    bool check_1 = false;
    bool check_2 = false;
    if (k != 0 && arr[k-1] == v){
        
    }if (k!= 1000001 && arr[k+1] == v){

    }if (!check_1 && !check_2){
        for (int i =0;i<n+1;i++){
            cout << arr[i] << " ";
        }
    }
    return 0;
}