#include <iostream>

using namespace std;

int main(){
    long long int mCap = 1;
    int n;
    cin>>n;
    while (mCap-n < 0)mCap*=2;
    cout << mCap-n <<endl;
    return 0;
}