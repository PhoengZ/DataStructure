#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main(){
    vector <int>arr = {1,3,5,2};
    vector <int> X = {20,4,10};
    sort(arr.begin(),arr.end());
    for (auto check :X){
        bool out = false;
        int left = 0;
        int right = arr.size()-1;
        while (left < right){
            int sum = arr[left]+ arr[right];
            if (sum == check){
                out = true;
                break;
            }
            else if(sum > check){right--;}
            else{left++;}
        }
        cout << "value of check = " << check << " ";
        if (out){cout << "YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    return 0;
}