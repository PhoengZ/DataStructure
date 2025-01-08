#include <iostream>

using namespace std;

int main(){
    int mSize,k;
    cin>>mSize>>k;
    int h=0;
    mSize--;
    if (k == 1)cout <<mSize;
    else{
        while (mSize>0){
            mSize = (mSize-1)/k;
            h++;
        }
        cout << h;
    }
    
    return 0;
}