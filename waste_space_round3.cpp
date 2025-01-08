#include <iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    long long int  mcap = 1;
    while (mcap < n)mcap*=2;
    cout << mcap-n; 
    return 0;
}