#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v;
    for (int i =0;i<n;i++){
        string x;
        cin >> x;
        if (x == "pb"){
            int y;
            cin >> y;
            v.push_back(y);
        }else if(x == "sa"){
            sort(v.begin(),v.end());
        }else if(x == "sd"){
            sort(v.begin(),v.end(),greater<int>());
        }
        else if(x == "r"){
            int k = v.size()-1;
            for (int j = 0;j<v.size()/2;j++){
                int temp = v[j];
                v[j] = v[k-j];
                v[k-j] = temp;
            }
        }else{
            int i;
            cin >> i;
            v.erase(v.begin()+i);
        }
    }
    for (int e:v){
        cout << e << " ";
    }
    return 0;
}