#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once
#include <vector>
#include <queue>
#include "queue.h"

template <typename T>
std::vector< CP::queue<T> > CP::queue<T>::split_queue(int k) {
    std::vector <CP::queue<T>> v(k);
    int size = mSize;
    for (int i = 0;i<size;i++){
        v[i%k].push(mData[(mFront)%mCap]);
        pop();
    }
    return v;
}

#endif

