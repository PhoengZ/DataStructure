#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long mSize = 0;
    long long mCap = 1;
    for (int i =0;i<n;i++){
        long long a,push;
        cin>> a>>push;
        if (a == 0){
            while ((push+mSize) > mCap)mCap*=2;
            mSize+=push;
        }else{
            mSize-=push;
        }
    }
    cout << (mCap-mSize);
    return 0;
}