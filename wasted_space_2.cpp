#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long  mSize = 0;
    long long  mCap = 1;
    for  (int i = 0;i<n;i++){
        string a;
        int b;
        cin>>a >>b;
        if ( a == "p"){
            while ((b+mSize)>mCap)mCap*=2;
            mSize+=b;
        }else if (a=="o"){
            mSize-=b;
        }else{
          if (b>mCap)mCap = b;
            mSize = b;
        }
    }
    cout << (mCap-mSize);
    return 0;
}