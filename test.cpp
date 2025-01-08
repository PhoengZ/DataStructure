#include <iostream>
#include <chrono>
#include <thread>
#include <vector>
#include <algorithm>
using namespace std;
int furthest (vector <int> & v );
int main(){
    auto start = std::chrono::high_resolution_clock::now();
    vector <int> v = {4,5,12,34,5,6,32,4213,5,6,4};
    int out = furthest(v);
    cout << "result is " << out <<endl;
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Elapsed time: " << duration.count() << " seconds" << std::endl;
    return 0;
}
int furthest (vector <int> & v ){
    vector <pair<int,int>> vec;
    for (int i  =0;i<v.size();i++){
        pair<int,int> p = {v[i],i};
        vec.push_back(p);
    }
    sort(vec.begin(),vec.end());
    int diff = 0;
    for (int i = 0;i<vec.size()-1;i++){
        if (i>0 && vec[i].first == vec[i-1].first){continue;}
        int k = i+1;
        while (k<vec.size() && vec[i].first == vec[k].first){k++;}
        if (vec[i].first == vec[k-1].first && abs(vec[i].second - vec[k-1].second) > diff){
            diff = abs(vec[i].second - vec[k-1].second);
        }
    }
    return diff;
}