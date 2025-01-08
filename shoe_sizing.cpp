#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector <int> v;
    bool check = true;
    for (int i = 0;i<n;i++){
        int k;
        cin >> k;
        if (v.size()!= 0 && k<v.back()){
            check = false;
        }
        v.push_back(k);
    }
    if (!check){
        sort(v.begin(),v.end());
    }
    for (int i = 0;i<m;i++){
        int j;
        cin>>j;
        auto it  = lower_bound(v.begin(),v.end(),j);
        if (it == v.end()){it--;}
        if (*it == j|| v.size() == 1){
            cout<< *it << " ";
        }
        else if (it == --v.end()){
            auto it_1 =v.end();
            it_1--;
            it_1--;
            if (abs(*it_1 - j) < abs(*it - j)){
                it = it_1;
            }
            cout << *it << " ";
        }
        else if(it == v.begin()){
            auto it_1 = v.begin();
            it_1++;
            if (abs(*it_1 - j) <= abs(*it - j)){
                it = it_1;
            }
            cout << *it << " ";
        }
        else{
            auto it_1 = --it;
            auto it_2 = ++it;
            if (abs(*it_2 - j) > abs((*it_1 - j))){
                it = it_1;
            }else{
                it = it_2;
            }
            cout << *it << " ";
        }
        
        // หลังจากนี้ไม่ต้องดู
        /*int left = 0;
        int right = v.size()-1;
        int real = 0;
        while (right != 0 &&(right - left)!= 1){
            int mid  = left + (right - left)/2;
            if (v[mid] == j){
                real = j;
                break;
            }else if(v[mid] > j){
                right = mid;
            }else{
                left = mid;
            }
        }
        if (real == 0){
            if (abs(v[left] - j) > abs(v[right] - j)){
                real = v[right];
            }else if (abs(v[left] - j) <abs(v[right] - j)){
                real = v[left];
            }else{
                real = v[right];
            }
        }*/
        //cout << real << " ";
    }
    
}