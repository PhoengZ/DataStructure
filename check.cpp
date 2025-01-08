#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue <int> p;
    int k = 50;
    int p = 40;
    int i = 30;
    p.push(&k);
    p.push(&p);
    p.push(&i);
    while (!p.empty()){
        *p.front = *p.front*2;
        sp.pop();
    }
    cout << k << p << i;
    return 0;
}