#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int min_ind= -1;
    int max_ind= -1;
    int left = 0;
    int right = nums.size()-1;
    vector <int> vec;
    if (nums.empty()){
        vec.push_back(-1);
        vec.push_back(-1);
        return vec;
    }
    while (left < right){
        int mid = left + (right-left)/2;
        if (nums[mid] >= target){
            right = mid;
        }else{
            left = mid;
        }
        if ((right - left) == 1){break;}
    }
    if (right-1 > -1 && nums[right-1] == target){
        min_ind = right-1;
    }
    else if (nums[right] == target){
        min_ind = right;
    }
    left= 0;
    right =nums.size()-1;
    while (left < right){
        int mid = left + (right-left)/2;
        if (nums[mid] <= target){
            left = mid;
        }else{
            right = mid;
        }
        if ((right - left) == 1){break;}
    }
    if (left +1 < nums.size() &&nums[left+1] == target){
        max_ind = left+1;
    }
    else if (nums[left] == target){
        max_ind = left;
    }
    vec.push_back(min_ind);
    vec.push_back(max_ind);
    return vec;
}

int main()
{
    vector<int> vec_1 = {5,7,7,8,8,10};
    vector<int> vec_2 = {5,7,7,8,8,10};
    vector<int> vec_3;
    int target_1 = 8;
    int target_2 = 6;
    int target_3 = 0;
    vector<int> vec_out_1 = searchRange(vec_1,target_1);
    vector<int> vec_out_2 = searchRange(vec_2,target_2);
    vector<int> vec_out_3 = searchRange(vec_3,target_3);
    cout << "min ind first = " << vec_out_1[0] << "Max ind first = " << vec_out_1[1] << endl;
    cout << "min ind second = " << vec_out_2[0] << "Max ind second = " << vec_out_2[1] << endl;
    cout << "min ind third = " << vec_out_3[0] << "Max ind third = " << vec_out_3[1] << endl;
    return 0;
}

