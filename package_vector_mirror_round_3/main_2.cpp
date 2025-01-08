#include <stdexcept>
#include <iostream>
#include "vector.h"
#include "student.h"

static unsigned int nSeed = 5323;

unsigned int PRNG()
{
    nSeed = (8253729 * nSeed + 2396403);
    return nSeed  % 32767;
}



int main() {
    std::ios_base::sync_with_stdio(false);std::cin.tie(0);
    CP::vector<int> v;
    int round,n;
    std::cin >> round >> n;
    for (int k = 0;k < round;k++) {
        v.clear();
        for (int i = 0;i < n;i++) {
            int a = PRNG();
            v.push_back(a);
        }
        v.mirror();
    }
    std::cout << "Size of v is " << v.size() << std::endl;
    for (auto &x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    v.check();
    std::cout << "password: p9 348ypafalj4k 3hlgkjshl" << std::endl;



}
