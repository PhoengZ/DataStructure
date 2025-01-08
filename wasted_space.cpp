#include <iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    int total = 1;

    while (total < n){
        total*=2;
    }
    cout << (total-n);
    return 0;
}