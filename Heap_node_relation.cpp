#include <iostream>

using namespace std;

int main(){
    int mSize,m;
    cin >> mSize>>m;
    for (int i = 0;i<m;i++){
        int a,b;
        cin>>a>>b;
        if (a==b)cout << "a and b are the same node"<<endl;
        else{
            int MAX = max(a,b);
            int MIN = min(a,b);
            while (MAX > MIN)MAX =(MAX-1)/2;
            if (MAX == MIN){
                if (MIN == a)cout << "a is an ancestor of b"<<endl;
                else cout << "b is an ancestor of a"<<endl;
            }else cout << "a and b are not related"<<endl;
        }
    }
    return 0;
}