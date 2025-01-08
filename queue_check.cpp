#include <iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    for (int i = 0;i<n;i++){
        int mFront,mSize,mCap,Last,cor;
        cin>>mFront>>mSize>>mCap>>Last>>cor;
        if (mFront < mCap &&mCap >= mSize &&(mFront + mSize) % mCap == Last){cout << "OK"<<endl;continue;}
        else{
            if (cor == 1){
                cout << "WRONG "<< (Last+mCap-mSize)%mCap << endl; 
            }else if (cor == 2){
                cout << "WRONG " << (Last-mFront+mCap)%mCap<<endl;
            }else if (cor == 3){
                if (Last > mSize){
                    cout << "WRONG " << (Last + 1)<<endl; 
                }else{
                    cout << "WRONG " << (mFront - Last + mSize)<<endl; 
                }
            }else if (cor ==4){
                cout << "WRONG " << ((mFront + mSize) % mCap)<<endl; 
            }else {
                cout << "WRONG" << endl;
            }
        }
        
        
    }
    return 0;
}