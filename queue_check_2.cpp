#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i =0;i<n;i++){
        int mFront,mSize,mCap,Last,cor;
        cin>>mFront>>mSize>>mCap>>Last>>cor;
        if (mFront < mCap && mSize<=mCap  && ((mFront+mSize)%mCap == Last))cout << "OK"<<endl;
        else{
            if (cor == 0)cout << "WRONG"<<endl;
            else if (cor == 1){
                cout << "WRONG "<<((Last+mCap-mSize)%mCap)<<endl;
            }else if (cor == 2){
                cout << "WRONG "<< (Last-mFront+mCap)%mCap<<endl;
            }else if (cor == 3){
                if (Last > mFront)cout <<"WRONG "<<(Last+1)<<endl;
                else cout << "WRONG "<<mFront - Last + mSize<<endl;
            }else{
                cout << "WRONG "<<(mFront+mSize)%mCap <<endl;
            }
        }
    }
    return 0;
}