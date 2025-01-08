#include <iostream>
#include <set>
#include <vector>

using std::pair as pair;
int main(){
    pair <int,int> p;
    std::vector <int> v ;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.resize(1);
    auto it = v.begin()+1;
    std::cout << *it  << std::endl;
    std::cout << v.size();
    return 0;
}