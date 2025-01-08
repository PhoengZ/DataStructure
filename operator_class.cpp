#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Myvector{
    public:
        Myvector(T am,T init):vec(am,init){}
        bool operator<(Myvector<T> v) const;
    private:
        vector <T> vec;
};
template <class T>
bool Myvector<T>::operator<(Myvector<T> v) const {
    if (vec.size() == v.vec.size()){
        return vec[0] < v.vec[0];
    }else{
        return vec.size() < v.vec.size();
    }
}

int main(){
    Myvector <int> v(10,0);
    Myvector <int> v_1(50,1);
    cout << (v<v_1);
    return 0;
}