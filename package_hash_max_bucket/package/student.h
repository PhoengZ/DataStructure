#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename KeyT,
          typename MappedT,
          typename HasherT,
          typename EqualT>
size_t CP::unordered_map<KeyT,MappedT,HasherT,EqualT>::max_bucket_length() {
    // your code here
    size_t s = 0;
    for (int i = 0;i<mBuckets.size();i++){
        if (mBuckets[i].size() > s)s = mBuckets[i].size();
    }
    return s;
}

#endif
