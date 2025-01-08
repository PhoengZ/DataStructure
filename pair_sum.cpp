#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector <int> v1;
    for (int i = 0;i<n;i++){
        int x;
        cin >> x;
        v1.push_back(x);
    }
    sort(v1.begin(),v1.end());
    while (m!=0){
        int y;
        cin>>y;
        int left =0;
        int right =v1.size()-1;
        bool check = false;
        while (left < right){
            int total = v1[left]+v1[right];
            if (total == y){
                check = true;
                break;
            }
            else if (total > y){right--;}
            else{left++;}
            while (left > 0 && v1[left] == v1[left-1]){left++;}
            while (right < v1.size()-1 && v1[right] == v1[right+1]){right--;}
        }
        if (check){cout<< "YES" << endl;}
        else{
            cout << "NO" << endl;
        }
        m--;
    }
    return 0;
}