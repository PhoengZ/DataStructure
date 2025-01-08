#include <unordered_map>
#include <iostream>
using namespace std;
class LRUCahce{
    protected:
        size_t n;
        unordered_map<size_t,char> m;
    public:
        LRUCahce(size_t n){
            this.n = n;
        }
}