#include <vector>
#include <map>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    map <T,int> m;
    for (int i =0;i<A.size();i++){
        v.push_back(A[i]);
        m[A[i]] = 1;
    }
    for (int i = 0;i<B.size();i++){
        if(m[B[i]] != 1){
            v.push_back(B[i]);
        }
        m[B[i]] = 1;
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    map <T,int> m;
    vector<T> v;
    for (int i = 0;i<B.size();i++){
        m[B[i]] = 1;
    }
    for (int i = 0;i<A.size();i++){
        if (m[A[i]] == 1)v.push_back(A[i]);
    }
    return v;
}
