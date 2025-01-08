#include <iostream>
#include <set>
#include <map>

using namespace std;

int main()
{
    set<int> s = {1,2,3,4,4,3,2,1};
    auto result = s.insert(5);
    cout << &result.first << " and " << result.second <<endl;
    for (auto it = s.begin();it!=s.end();it++){
        cout << *it << ", ";
    }
    cout << endl;
    std::map<int, std::string> myMap;
    myMap[1] = "One";
    myMap[2] = "Two";

    size_t numErased = myMap.erase(2);
    std::cout << "Number of elements erased: " << numErased << std::endl; 
    myMap[2] = "Two";
    auto it = myMap.find(1);
    it = myMap.erase(it);
    std::cout << "Next element after erase: " << (it == myMap.end() ? "End" : std::to_string(it->first)) << std::endl;
    return 0;
}
