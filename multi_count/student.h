#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    std::map <T,int> mp;
    for (int i =0;i<mSize;i++){
        mp[mData[(mFront + i)%mCap]]++;
    }
    std::vector <std::pair<T,size_t>> vp(k.size());
    for (int i = 0;i<k.size();i++){
        vp[i].first = k[i];
        vp[i].second = mp[k[i]];
    }
    return vp;
}

#endif
