#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector <pair<int,int>> v(n);
    for (int i = 0 ;i<m;i++){
        int a,b;
        cin>>a>>b;
        if (a ==1){
            int idx =b%n;
            int cou = 0;
            int idx_r = idx;
            while (v[idx_r].second == 1){
                idx_r = (idx+(cou*cou))%n;
                cou++;
            }
            idx = idx_r;
            if (v[idx].second == -1 || v[idx].second == 0){
                v[idx].first  = b;
                v[idx].second = 1;
            }
        }else{
            int idx =b%n;
            if (v[idx].second == 1 || v[idx].second == -1){
                int cou = 0;
                int idx_r = idx;
                while ((v[idx_r].second == 1 && v[idx_r].first != b)  || v[idx_r].second == -1 ){
                    idx_r = (idx+(cou*cou))%n;
                    cou++;
                }
                idx = idx_r;
            }
            if (v[idx].second == 1 && v[idx].first == b){
                v[idx].first  = 0;
                v[idx].second = -1;
            }
            
        }
        
    }
    int MAX_f_i = 1;
    int MAX_f_e = 1;
    int cou_i = 0;
    int cou_e = 0;
    int cou = 0;
    for (int i =0;i<v.size();i++){
        int j = i;
        cou = 0;
        while (true){
            cou++;
            cou_i++;
            if (v[j].second != 1)break;
            j = (i+(cou*cou))%n;
        }
        if ((v[j].second == 0 || v[j].second == -1)){
            if (cou_i > MAX_f_i){
                MAX_f_i = cou_i;
            }
            cou_i = 0;
        }
        j = i;
        cou = 0;
        while (true){
            cou++;
            cou_e++;
            if (v[j].second ==0){
                break;
            }
            j = (i+(cou*cou))%n;
        }
        if (v[j].second == 0){
            if (cou_e > MAX_f_e){
                MAX_f_e = cou_e;
            }
            cou_e = 0;
        }
    }
    cout << MAX_f_i << " " << MAX_f_e;
    return 0;
}